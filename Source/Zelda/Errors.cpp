/// @file Errors.cpp
/// @brief This file contains the implementation of custom error classes used in the Zelda project.

#include "Errors.h"

/// @brief Default constructor.
Errors::Errors() : std::exception{}
{
}

/// @brief Constructor with a custom message.
/// @param msg The custom error message.
Errors::Errors(std::string msg)
{
	message = msg;
}

/// @brief Destructor.
Errors::~Errors()
{
}

/// @brief Default constructor.
ErrActorType::ErrActorType() : Errors{}
{
}

/// @brief Constructor with a custom message.
/// @param msg The custom error message.
ErrActorType::ErrActorType(std::string msg) : Errors(msg) {}

/// @brief Destructor.
ErrActorType::~ErrActorType()
{
}

/// @brief Default constructor.
ErrNoLauncher::ErrNoLauncher() : Errors{}
{
}

/// @brief Constructor with a custom message.
/// @param msg The custom error message.
ErrNoLauncher::ErrNoLauncher(std::string msg) : Errors(msg) {}

/// @brief Destructor.
ErrNoLauncher::~ErrNoLauncher()
{
}

/// @brief Default constructor.
ErrActorNotExist::ErrActorNotExist() : Errors{}
{
}

/// @brief Constructor with a custom message.
/// @param msg The custom error message.
ErrActorNotExist::ErrActorNotExist(std::string msg) : Errors(msg) {}

/// @brief Destructor.
ErrActorNotExist::~ErrActorNotExist()
{

}