// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem.h"
#include "DXCharacter.h"


Ability::Ability() :
	owner(nullptr),
	ability_type(EAbility::Basic_Attack),
	range(0),
	name(""),
	description(""),
	isAbilityActive(false)
{}

Ability::~Ability() {}

void Ability::AssignAbilitiyType() {
	if (ability_type == EAbility::Basic_Attack) {
		/*
			How this grid is represented, 0 being a non effected tile, 1 being an effected tile
			0, 0, 0, 0, 0,
			0, 0, 0, 0, 0,
			0, 0, 0, 0, 0,
			0, 0, 0, 0, 0,
			0, 0, 0, 0, 0,
		*/
		area_of_effect[0] = 0;	area_of_effect[1] = 0;	area_of_effect[2] = 0;	area_of_effect[3] = 0;	area_of_effect[4] = 0;

		area_of_effect[5] = 0;	area_of_effect[6] = 0;	area_of_effect[7] = 0;	area_of_effect[8] = 0;	area_of_effect[9] = 0;

		area_of_effect[10] = 0;	area_of_effect[11] = 0;	area_of_effect[12] = 0;	area_of_effect[13] = 0;	area_of_effect[14] = 0;

		area_of_effect[15] = 0;	area_of_effect[16] = 0;	area_of_effect[17] = 0;	area_of_effect[18] = 0;	area_of_effect[19] = 0;

		area_of_effect[20] = 0;	area_of_effect[21] = 0;	area_of_effect[22] = 0;	area_of_effect[23] = 0;	area_of_effect[24] = 0;
	}
}