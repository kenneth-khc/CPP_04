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

/* Default constructor */
Cure::Cure(): AMateria("cure")
{
	std::cout << "Cure default constructor called"
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
