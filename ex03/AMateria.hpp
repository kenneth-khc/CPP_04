/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:49:23 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/12 18:02:02 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

/* An abstract Materia */

class	AMateria
{
protected:
	// [...]
	//
public:
	AMateria(std::string const& type);
	// [...]
	
	std::string const&	getType() const; // Returns the materia type

	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);
};

#endif
