/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:45:08 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/02 20:28:46 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

/* Color codes */
#define GREEN "\033[0;32m"
#define RED	"\033[0;31m"
#define YELLOW "\033[0;33m"
#define CRESET "\033[0m"

/* Default constructor */
WrongAnimal::WrongAnimal(): type("Default WrongAnimal")
{
	std::cout << GREEN << "WrongAnimal default constructor called" << CRESET
			  << std::endl;
}

/* Constructor */
WrongAnimal::WrongAnimal(std::string newType): type(newType)
{
	std::cout << GREEN << "WrongAnimal constructor called" << CRESET
			  << std::endl;
}

/* Copy constructor */
WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	std::cout << GREEN << "WrongAnimal copy constructor called" << CRESET
			  << std::endl;

	*this = other;
}

/* Copy assignment operator */
WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << GREEN << "WrongAnimal copy assignment operator called" << CRESET
			  << std::endl;

	this->type = other.type;
	return *this;
}

/* Destructor */
WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "WrongAnimal destructor called" << CRESET
			  << std::endl;
}

/* Get the type of the WrongAnimal */
const std::string&	WrongAnimal::getType() const
{
	return type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes a sound" << std::endl;
}

