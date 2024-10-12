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

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{

}

MateriaSource::~MateriaSource()
{

}

void	MateriaSource::learnMateria(AMateria*)
{

}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	(void)type; return NULL;
}
