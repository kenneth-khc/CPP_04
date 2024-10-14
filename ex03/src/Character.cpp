/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 01:58:53 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/13 02:24:56 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"

/* Color codes */
#define GREEN "\033[0;32m"
#define RED	"\033[0;31m"
#define YELLOW "\033[0;33m"
#define CRESET "\033[0m"

/* Default constructor */
Character::Character():
name("Default"),
inventory()
{
	std::cout << GREEN << "Character default constructor called" << CRESET
			  << std::endl;
}

/* Constructor */
Character::Character(std::string name):
name(name),
inventory()
{
	std::cout << GREEN << "Character constructor called\n" << CRESET
			  << std::endl;
}

/* Copy constructor */
Character::Character(const Character& other):
name(other.name)
{
	std::cout << GREEN << "Character copy constructor called" << CRESET
			  << std::endl;

	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (other.inventory[i])
		{
			this->inventory[i] = other.inventory[i]->clone();
		}
	}
}

/* Copy assignment operator */
Character&	Character::operator=(const Character& other)
{
	if (this == &other)
	{
		return *this;
	}
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		delete inventory[i];
	}
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		this->inventory[i] = other.inventory[i]->clone();
	}
	return *this;
}

/* Destructor */
Character::~Character()
{
	std::cout << RED << "\nCharacter destructor called" << CRESET
			  << std::endl;

	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		delete inventory[i];
	}
}

std::string const&	Character::getName() const
{
	return name;
}

void	Character::equip(AMateria* materia)
{
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = materia; // equip to the first empty slot
			return ;
		}
	}
	std::cout << "No free slot to equip Materia " << materia->getType()
			  << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= INVENTORY_SIZE || inventory[idx] == NULL)
	{
		std::cout << "Nothing to unequip at index " << idx << std::endl;
	}
	else
	{
		std::cout << "Unequipping materia at index " << idx << std::endl;
		inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < INVENTORY_SIZE)
	{
		if (inventory[idx])
		{
			inventory[idx]->use(target);
		}
		else
		{
			std::cout << "Nothing equipped at index " << idx << std::endl;
		}
	}
	else
	{
		std::cout << "Index " << idx << " exceeds Character's inventory size of 4"
				  << std::endl;
	}
}
