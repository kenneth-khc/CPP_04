/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 23:56:10 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/13 02:26:12 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"
#include "AMateria.hpp"

/* Color codes */
#define GREEN "\033[0;32m"
#define RED	"\033[0;31m"
#define YELLOW "\033[0;33m"
#define CRESET "\033[0m"

/* Default constructor */
MateriaSource::MateriaSource():
inventory(),
index(0)
{
	std::cout << GREEN << "MateriaSource default constructor called\n" << CRESET
			  << std::endl;
}

/* Copy constructor */
MateriaSource::MateriaSource(const MateriaSource&)
{
	std::cout << GREEN << "MateriaSource copy constructor called\n" << CRESET
			  << std::endl;
}

/* Copy assignment operator */
MateriaSource&	MateriaSource::operator=(const MateriaSource&)
{
	std::cout << GREEN << "MateriaSource copy assignment operator called" << CRESET
			  << std::endl;

	return *this;
}

/* Destructor */
MateriaSource::~MateriaSource()
{
	std::cout << RED << "MateriaSource destructor called" << CRESET
			  << std::endl;

	for (int i = 0; i < INVENTORY_SIZE; ++i)
	{
		delete inventory[i];
	}
}

void	MateriaSource::learnMateria(AMateria* newTemplate)
{
	if (index < INVENTORY_SIZE)
	{
		inventory[index] = newTemplate;
		++index;
	}
	else
	{
		std::cout << "MateriaSource is at maximum capacity\n";
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < INVENTORY_SIZE && inventory[i]; ++i)
	{
		if (inventory[i]->getType() == type)
		{
			// return a new instance of the materia learned
			return inventory[i]->clone();
		}
	}
	return 0; // type is unknown
}

