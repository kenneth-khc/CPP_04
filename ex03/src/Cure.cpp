/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:16:57 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/12 18:18:05 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"
#include "ICharacter.hpp"

/* Color codes */
#define GREEN "\033[0;32m"
#define RED	"\033[0;31m"
#define YELLOW "\033[0;33m"
#define CRESET "\033[0m"

/* Default constructor */
Cure::Cure(): AMateria("cure")
{
	std::cout << GREEN << "Cure default constructor called\n" << CRESET
			  << std::endl;
}

/* Copy constructor */
Cure::Cure(const Cure&): AMateria("cure")
//AMateria(other) // delegate to AMateria's copy constructor
{
	std::cout << GREEN << "Cure copy constructor called" << CRESET
			  << std::endl;
}

/* Copy assignment operator */
Cure&	Cure::operator=(const Cure&)
{
	std::cout << GREEN << "Copy assignment operator called" << CRESET
			  << std::endl;

	// no need to reassign const type of the same Materia

	return *this;
}

/* Destructor */
Cure::~Cure()
{
	std::cout << RED << "Cure destructor called" << CRESET
			  << std::endl;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *"
			  << std::endl;
}

AMateria*	Cure::clone() const
{
	return new Cure();
}
