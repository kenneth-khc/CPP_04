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

/* Default constructor */
Ice::Ice(): AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

/* Copy constructor */
Ice::Ice(const Ice&): AMateria("ice")
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice&	Ice::operator=(const Ice& other)
{
	(void)other;
//	this->type = other.type;

	return *this;
}

/* Destructor */
Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
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
