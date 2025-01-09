// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Observer.h"
#include <vector>

/**
 * 
 */
class ZELDA_API Subject
{
private:
    std::vector<Observer*> observers;

public:
	Subject();
	~Subject();

    void Attach(Observer* observer);
    void Detach(Observer* observer);
    void Notify(AActor* KilledActor);
};
