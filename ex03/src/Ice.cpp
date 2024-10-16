/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:04:36 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/12 18:06:50 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

/* Color codes */
#define GREEN "\033[0;32m"
#define RED	"\033[0;31m"
#define YELLOW "\033[0;33m"
#define CRESET "\033[0m"

/* Default constructor */
Ice::Ice(): AMateria("ice")
{
	std::cout << GREEN << "Ice default constructor called\n" << CRESET
			  << std::endl;
}

/* Copy constructor */
Ice::Ice(const Ice&): AMateria("ice")
//AMateria(other) //delegate to AMateria's copy constructor
{
	std::cout << GREEN << "Ice copy constructor called\n" << CRESET
			  << std::endl;
}

/* Copy assignment operator */
Ice&	Ice::operator=(const Ice&)
{
	std::cout << GREEN << "Ice copy assignment operator called\n" << CRESET
			  << std::endl;

	// no need to reassign const type of the same Materia

	return *this;
}

/* Destructor */
Ice::~Ice()
{
	std::cout << RED << "Ice destructor called" << CRESET
			  << std::endl;
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"
			  << std::endl;
}

AMateria*	Ice::clone() const
{
	return new Ice();
}
