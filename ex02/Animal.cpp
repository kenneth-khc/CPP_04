/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:45:08 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/12 23:59:53 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

/* Color codes */
#define GREEN "\033[0;32m"
#define RED	"\033[0;31m"
#define YELLOW "\033[0;33m"
#define CRESET "\033[0m"

/* Default constructor */
Animal::Animal(): type("Default Animal")
{
	std::cout << GREEN << "Animal default constructor called" << CRESET
			  << std::endl;
}

/* Constructor */
Animal::Animal(std::string newType): type(newType)
{
	std::cout << GREEN << "Animal constructor called" << CRESET
			  << std::endl;
}

/* Copy constructor */
Animal::Animal(const Animal& other)
{
	std::cout << GREEN << "Animal copy constructor called" << CRESET
			  << std::endl;

	*this = other;
}

/* Copy assignment operator */
Animal&	Animal::operator=(const Animal& other)
{
	std::cout << GREEN << "Animal copy assignment operator called" << CRESET
			  << std::endl;

	this->type = other.type;
	return *this;
}

/* Destructor */
Animal::~Animal()
{
	std::cout << RED << "Animal destructor called\n" << CRESET
			  << std::endl;
}

/* Abstract classes cannot be instantiated,
 * pure virtual functions don't need to be defined although they can be */

/* Get the type of the Animal */
const std::string&	Animal::getType() const
{
	return type;
}

#if 0
void	Animal::makeSound() const
{
	std::cout << "Animal makes a sound" << std::endl;
}

#endif
