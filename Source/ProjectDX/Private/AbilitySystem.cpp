// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem.h"
#include "DXCharacter.h"


Ability::Ability() :
	owner(nullptr),
	id(-1),
	name(""),
	description(""),
	isAbilityActive(false)
{}

Ability::~Ability() {}