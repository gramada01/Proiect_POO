// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <GameFramework/Pawn.h>
#include <iostream>


class ZELDA_API EmergencyRun
{
private:
	int _speed;
	mutable APawn* _pawn;
	mutable int _currentStep = 0;
	int _steps;

public:
	EmergencyRun() : EmergencyRun(nullptr, 0, 0) {};

	EmergencyRun(APawn* pawn, int speed, int steps) : _pawn{ pawn }, _speed{ speed }, _steps{ steps } {};
	
	void doStep(float deltaTime) const;
	int getSpeed() const { return _speed; };

	void startRunning() const { _currentStep = _steps; }

	bool isRunning() const { return _currentStep != 0; };
	
};


