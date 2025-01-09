// Fill out your copyright notice in the Description page of Project Settings.


#include "Caretaker.h"

void UCaretaker::SaveMemento(UMemento* Memento)
{
	SavedMemento = Memento;
}

UMemento* UCaretaker::LoadMemento()
{
	return SavedMemento;
}