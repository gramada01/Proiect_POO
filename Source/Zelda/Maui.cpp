/// @file Maui.cpp
/// @brief This file contains the implementation of the AMaui class methods.

#include "Maui.h"

/// @brief Default constructor.
AMaui::AMaui() : AEnemy{}
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

/// @brief Attacks the player.
void AMaui::attack()
{
	int ceva = 1;
}