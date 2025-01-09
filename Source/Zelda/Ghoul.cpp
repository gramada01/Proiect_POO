/// @file Ghoul.cpp
/// @brief This file contains the implementation of the AGhoul class methods.

#include "Ghoul.h"

/// @brief Default constructor.
AGhoul::AGhoul() : AEnemy{}
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

/// @brief Attacks the player.
void AGhoul::attack()
{
	int lalalala = 10;
}