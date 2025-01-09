/// @file Subject.cpp
/// @brief This file contains the implementation of the Subject class methods.

#include "Subject.h"

/// @brief Default constructor.
Subject::Subject()
{
}

/// @brief Destructor.
Subject::~Subject()
{
    // Debug logging to help identify the issue
    UE_LOG(LogTemp, Warning, TEXT("Subject destructor called. Observers count: %d"), observers.size());

    // Clear the observers vector
    observers.clear();
}

/// @brief Attaches an observer to the subject.
/// @param observer The observer to attach.
void Subject::Attach(Observer* observer)
{
    observers.push_back(observer);
}

/// @brief Detaches an observer from the subject.
/// @param observer The observer to detach.
void Subject::Detach(Observer* observer)
{
    observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
}

/// @brief Notifies all attached observers of an event.
/// @param KilledActor The actor that was killed.
void Subject::Notify(AActor* KilledActor)
{
    for (Observer* observer : observers)
    {
        observer->OnEnemyKilled(KilledActor);
    }
}