/// @file Caretaker.cpp
/// @brief This file contains the implementation of the UCaretaker class methods.

#include "Caretaker.h"

/// @brief Saves a memento.
/// @param Memento The memento to be saved.
void UCaretaker::SaveMemento(UMemento* Memento)
{
	SavedMemento = Memento;
}

/// @brief Loads the saved memento.
/// @return The saved memento.
UMemento* UCaretaker::LoadMemento()
{
	return SavedMemento;
}