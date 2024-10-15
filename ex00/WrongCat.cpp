/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:44:05 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/02 18:02:34 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

/* Color codes */
#define GREEN "\033[0;32m"
#define RED	"\033[0;31m"
#define YELLOW "\033[0;33m"
#define CRESET "\033[0m"

/* Default constructor */
WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << GREEN << "WrongCat default constructor called\n" << CRESET
			  << std::endl;
}

/* Copy constructor */
WrongCat::WrongCat(const WrongCat& other)
{
	std::cout << GREEN << "WrongCat copy constructor called" << CRESET 
			  << std::endl;

	*this = other;
}

/* Copy assignment operator */
WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	std::cout << GREEN << "WrongCat copy assignment operator called" << CRESET
			  << std::endl;

	this->type = other.type;
	return *this;
}

/* Destructor */
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongCat is meowing wrongly" << std::endl;
}

const std::string&	WrongCat::getType() const
{
	return type;
}
