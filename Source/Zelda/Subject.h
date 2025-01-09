/// @file Subject.h
/// @brief This file contains the declaration of the Subject class which manages a list of observers and notifies them of events.

#pragma once

#include "CoreMinimal.h"
#include "Observer.h"
#include <vector>

/// @class Subject
/// @brief A class that manages a list of observers and notifies them of events.
class ZELDA_API Subject
{
private:
    /// A list of observers.
    std::vector<Observer*> observers;

public:
    /// @brief Default constructor.
    Subject();

    /// @brief Destructor.
    ~Subject();

    /// @brief Attaches an observer to the subject.
    /// @param observer The observer to attach.
    void Attach(Observer* observer);

    /// @brief Detaches an observer from the subject.
    /// @param observer The observer to detach.
    void Detach(Observer* observer);

    /// @brief Notifies all attached observers of an event.
    /// @param KilledActor The actor that was killed.
    void Notify(AActor* KilledActor);
};