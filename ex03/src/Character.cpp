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

Character::Character(std::string name):
name(name),
inventory(),
index(0)
{
	std::cout << "Character constructor called" << std::endl;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
}

std::string const&	Character::getName() const
{
	return name;
}

void	Character::equip(AMateria* materia)
{
	inventory[index] = materia;
	++index;
}

void	Character::unequip(int idx)
{
	if (inventory[idx])
	{
		// unequip but don't delete materia
		inventory[idx] = NULL;
		index = idx;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	inventory[idx]->use(target);
}
