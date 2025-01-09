// Fill out your copyright notice in the Description page of Project Settings.


#include "Subject.h"

Subject::Subject()
{
}

Subject::~Subject()
{
    // Debug logging to help identify the issue
    UE_LOG(LogTemp, Warning, TEXT("Subject destructor called. Observers count: %d"), observers.size());

    // Clear the observers vector
    observers.clear();
}

void Subject::Attach(Observer* observer)
{
    observers.push_back(observer);
}

void Subject::Detach(Observer* observer)
{
    observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
}

void Subject::Notify(AActor* KilledActor)
{
    for (Observer* observer : observers)
    {
        observer->OnEnemyKilled(KilledActor);
    }
}
