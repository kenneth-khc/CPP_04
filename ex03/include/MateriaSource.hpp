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
	MateriaSource();
	~MateriaSource();
	void		learnMateria(AMateria*); // override
	AMateria*	createMateria(std::string const& type); // override

};

#endif