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

AMateria::AMateria(std::string const& type): type(type)
{
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "AMateria's use() called on " << target.getName()
			  << std::endl;
}
