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

/* Default constructor */
MateriaSource::MateriaSource():
inventory(),
index(0)
{

}

/* Destructor */
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		delete inventory[i];
	}
}

void	MateriaSource::learnMateria(AMateria* newTemplate)
{
	if (index < INVENTORY_SIZE)
	{
		inventory[index] = newTemplate;
		index++;
	}
	else
	{
		std::cout << "MateriaSource is at maximum capacity\n";
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < INVENTORY_SIZE && inventory[i]; i++)
	{
		if (inventory[i]->getType() == type)
		{
			// return a copy of the materia learned
			return inventory[i];
		}
	}
	return 0; // type is unknown
}

