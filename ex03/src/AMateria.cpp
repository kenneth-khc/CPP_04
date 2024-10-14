/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 01:47:30 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/13 01:58:32 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AMateria.hpp"

/* Color codes */
#define GREEN "\033[0;32m"
#define RED	"\033[0;31m"
#define YELLOW "\033[0;33m"
#define CRESET "\033[0m"

/* Default constructor */
AMateria::AMateria()
{
	std::cout << GREEN << "AMateria default constructor called" << CRESET
			  << std::endl;
}

/* Constructor */
AMateria::AMateria(std::string const& type): type(type)
{
	std::cout << GREEN << "AMateria constructor called" << CRESET
			  << std::endl;
}

/* Copy constructor
 * Mostly unnecessary because AMateria is abstract and never getting constructed
 * directly, but you can delegate copying from a Derived class to this Base class
 * to handle its member variables */
AMateria::AMateria(const AMateria&)//: type(other.type)
{
	std::cout << GREEN << "AMateria copy constructor called" << CRESET
			  << std::endl;

	// but nothing needs to get copied
}

/* Copy assignment operator */
AMateria&	AMateria::operator=(const AMateria&)
{
	std::cout << GREEN << "AMateria copy assignment operator called" << CRESET
			  << std::endl;

	// don't reassign type to another Materia so we do nothing

	return *this;
}

/* Destructor */
AMateria::~AMateria()
{
	std::cout << RED << "AMateria destructor called\n" << CRESET
			  << std::endl;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "AMateria's use() called on " << target.getName()
			  << std::endl;
}

std::string const&	AMateria::getType() const
{
	return type;
}
