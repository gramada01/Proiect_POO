/// @file Errors.h
/// @brief This file contains the declaration of custom error classes used in the Zelda project.

#pragma once

#include "CoreMinimal.h"
#include <exception>
#include <string>

/// @class Errors
/// @brief Base class for custom errors in the Zelda project.
class ZELDA_API Errors : public std::exception
{
protected:
	/// The error message.
	std::string message = "No Launcher!!!";
public:
	/// @brief Default constructor.
	Errors();

	/// @brief Constructor with a custom message.
	/// @param msg The custom error message.
	Errors(std::string msg);

	/// @brief Destructor.
	~Errors();

	/// @brief Gets the error message.
	/// @return The error message.
	std::string get_message()
	{
		return this->message;
	}
};

/// @class ErrActorType
/// @brief Error class for invalid actor type errors.
class ErrActorType : public Errors
{
public:
	/// @brief Default constructor.
	ErrActorType();

	/// @brief Constructor with a custom message.
	/// @param msg The custom error message.
	ErrActorType(std::string msg);

	/// @brief Destructor.
	~ErrActorType();
};

/// @class ErrNoLauncher
/// @brief Error class for missing launcher errors.
class ErrNoLauncher : public Errors
{
public:
	/// @brief Default constructor.
	ErrNoLauncher();

	/// @brief Constructor with a custom message.
	/// @param msg The custom error message.
	ErrNoLauncher(std::string msg);

	/// @brief Destructor.
	~ErrNoLauncher();
};

/// @class ErrActorNotExist
/// @brief Error class for non-existent actor errors.
class ErrActorNotExist : public Errors
{
public:
	/// @brief Default constructor.
	ErrActorNotExist();

	/// @brief Constructor with a custom message.
	/// @param msg The custom error message.
	ErrActorNotExist(std::string msg);

	/// @brief Destructor.
	~ErrActorNotExist();
};


