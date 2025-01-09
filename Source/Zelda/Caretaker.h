/// @file Caretaker.h
/// @brief This file contains the declaration of the UCaretaker class which is responsible for saving and loading mementos.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Memento.h"
#include "Caretaker.generated.h"

/**
 * @class UCaretaker
 * @brief A class that acts as a caretaker for mementos, allowing them to be saved and loaded.
 */
UCLASS()
class ZELDA_API UCaretaker : public UObject
{
	GENERATED_BODY()
public:
	/**
	 * @brief Saves a memento.
	 * @param Memento The memento to be saved.
	 */
	void SaveMemento(UMemento* Memento);

	/**
	 * @brief Loads the saved memento.
	 * @return The saved memento.
	 */
	UMemento* LoadMemento();

	/// The saved memento.
	UPROPERTY()
	UMemento* SavedMemento;
};