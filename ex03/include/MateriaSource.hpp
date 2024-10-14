/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 23:53:17 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/13 02:00:53 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class	MateriaSource: public IMateriaSource
{
public:
	MateriaSource(); // default constructor
	MateriaSource(const MateriaSource&); // copy constructor
	MateriaSource&	operator=(const MateriaSource&); // copy assignment operator
	~MateriaSource(); // destructor

	void		learnMateria(AMateria*); // override
	AMateria*	createMateria(std::string const& type); // override

private:
				#define INVENTORY_SIZE 4
	AMateria*	inventory[INVENTORY_SIZE];
	int			index;

};

#endif
