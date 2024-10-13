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

/* Copy constructor */
AMateria::AMateria(const AMateria& other)
{
	std::cout << GREEN << "AMateria copy constructor called" << CRESET
			  << std::endl;

	*this = other;
}

/* Copy assignment operator */
AMateria&	AMateria::operator=(const AMateria& other)
{
	std::cout << GREEN << "AMateria copy assignment operator called" << CRESET
			  << std::endl;

	this->type = other.type;
	return *this;
}

/* Destructor */
AMateria::~AMateria()
{
	std::cout << RED << "AMateria destructor called" << CRESET
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
