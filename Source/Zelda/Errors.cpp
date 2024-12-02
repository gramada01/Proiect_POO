// Fill out your copyright notice in the Description page of Project Settings.


#include "Errors.h"

Errors::Errors() : std::exception{}
{
}

Errors::Errors(std::string msg)
{
	message = msg;
}

Errors::~Errors()
{
}

ErrActorType::ErrActorType() : Errors{}
{
}

ErrActorType::ErrActorType(std::string msg) : Errors(msg){}

ErrActorType::~ErrActorType()
{
}

ErrNoLauncher::ErrNoLauncher() : Errors{}
{
}

ErrNoLauncher::ErrNoLauncher(std::string msg) : Errors(msg){}

ErrNoLauncher::~ErrNoLauncher()
{
}

ErrActorNotExist::ErrActorNotExist() : Errors{}
{
}

ErrActorNotExist::ErrActorNotExist(std::string msg) : Errors(msg) {}

ErrActorNotExist::~ErrActorNotExist()
{
}
