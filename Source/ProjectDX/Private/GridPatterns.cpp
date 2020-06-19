// Fill out your copyright notice in the Description page of Project Settings.


#include "GridPatterns.h"
#include "Grid.h"
#include "Square/SquareGrid.h"
#include "Square/SquareGridManager.h"
#include "BasicGridInfo.h"

GridPatterns::GridPatterns()
{
}

GridPatterns::~GridPatterns()
{
}

GridPattern::GridPattern(uint32 Range, EPattern Pattern, class UGrid* HomeGrid, FGameplayTag Tag) :
	range(Range),
	pattern(Pattern),
	homeGrid(HomeGrid),
	tag(Tag)
{}

GridPattern::GridPattern(FGridPattern grid_pattern) :
	range(grid_pattern.Range),
	pattern(grid_pattern.Pattern),
	homeGrid(grid_pattern.HomeGrid),
	tag(grid_pattern.Tag)
{}

GridPattern::~GridPattern() {
	if (homeGrid) homeGrid = nullptr;
}

void GridPattern::SetPatternIsHidden(bool isHidden) {
	if (isHidden)
		RemoveTags();
	else
		AddTags();

	bIsHidden = isHidden;
}

void GridPattern::RemoveTags() {
	if (tag.IsValid()) {
		for (UGrid* grid : effectedGrids) {
			if (grid->GridInfo->GameplayTags.HasTag(tag))
				grid->GridInfo->GameplayTags.RemoveTag(tag);
		}
	}
}

void GridPattern::AddTags() {
	if (tag.IsValid()) {
		for (UGrid* grid : effectedGrids) {
			if (!grid->GridInfo->GameplayTags.HasTag(tag))
				grid->GridInfo->GameplayTags.AddTag(tag);
		}
	}
}

void GridPattern::ExpandToRange(uint32 Range) {
	range = Range;
	RemoveTags();
	effectedGrids.Reset();

	if (range < 0)
		return;

	if (homeGrid == nullptr)
		return;

	switch (pattern) {
	case EPattern::Single:
		Expand_Single();
		break;
	case EPattern::tCross:
		Expand_tCross();
		break;
	default:
		break;
	}

	if(!bIsHidden)
		AddTags();
	PrintEffectedGridCoords();
}

void GridPattern::UpdateHomeGrid(UGrid* HomeGrid) {
	homeGrid = HomeGrid;
	ExpandToRange(range);
}

void GridPattern::GetEffectedGrids(TArray<UGrid*>& Grids) {
	Grids.Reset();
	for (UGrid* Grid : effectedGrids) {
		Grids.Push(Grid);
	}
}

void GridPattern::Expand_Single() {
	Cast<ASquareGridManager>(homeGrid->GridManager)->GetSquareGridsByRange(homeGrid, range, effectedGrids, false);
}

void GridPattern::Expand_tCross() {
	effectedGrids.Add(homeGrid);
	TArray<UGrid*> home_neighbours;
	homeGrid->GetNeighbors(home_neighbours);

	for (UGrid* neighbour : home_neighbours) {

		effectedGrids.Add(neighbour);
		UGrid* start = neighbour;
		uint32 counter = 0;
		TArray<UGrid*> n;

		if (neighbour->GetCoord().X > homeGrid->GetCoord().X) {
			while (counter < range) {
				start->GetNeighbors(n);
				for (UGrid* g : n) {
					if (g->GetCoord().X > start->GetCoord().X) {
						start = g;
						effectedGrids.Add(g);
						++counter;
					}
				}
			}
		}
		else if (neighbour->GetCoord().X < homeGrid->GetCoord().X) {
			while (counter < range) {
				start->GetNeighbors(n);
				for (UGrid* g : n) {
					if (g->GetCoord().X < start->GetCoord().X) {
						start = g;
						effectedGrids.Add(g);
						++counter;
					}
				}
			}
		}
		else if (neighbour->GetCoord().Y < homeGrid->GetCoord().Y) {
			while (counter < range) {
				start->GetNeighbors(n);
				for (UGrid* g : n) {
					if (g->GetCoord().Y < start->GetCoord().Y) {
						start = g;
						effectedGrids.Add(g);
						++counter;
					}
				}
			}
		}
		else if (neighbour->GetCoord().Y > homeGrid->GetCoord().Y) {
			while (counter < range) {
				start->GetNeighbors(n);
				for (UGrid* g : n) {
					if (g->GetCoord().Y > start->GetCoord().Y) {
						start = g;
						effectedGrids.Add(g);
						++counter;
					}
				}
			}
		}

	}

}

void GridPattern::PrintEffectedGridCoords() {
	UE_LOG(LogTemp, Warning, TEXT("GridPattern: PRINTING EFFECTED GRIDS--------------"));
	for (UGrid* g : effectedGrids) {
		if (GEngine) {
			// GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, "Grid: " + g->GetCoord().ToString());
		}
		UE_LOG(LogTemp, Warning, TEXT("GridPattern:: Grid %s"), *g->GetCoord().ToString());
	}

	UE_LOG(LogTemp, Warning, TEXT("GridPattern: FINISHED PRINTING EFFECTED GRIDS--------------"));
}