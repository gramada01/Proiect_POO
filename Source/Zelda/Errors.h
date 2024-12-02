// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <exception>
#include <string>



class ZELDA_API Errors : public std::exception
{
protected:
	std::string message = "No Launcher!!!";
public:
	Errors();
	Errors(std::string msg);
	~Errors();
	std::string get_message()
	{
		return this->message;
	}
};

class ErrActorType : public Errors
{
public:
	ErrActorType();
	ErrActorType(std::string msg);
	~ErrActorType();

};

class ErrNoLauncher : public Errors
{
public:
	ErrNoLauncher();
	ErrNoLauncher(std::string msg);
	~ErrNoLauncher();


};

class ErrActorNotExist : public Errors
{
public:
	ErrActorNotExist();
	ErrActorNotExist(std::string msg);
	~ErrActorNotExist();

};
