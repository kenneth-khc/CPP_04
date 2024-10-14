/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:49:23 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/13 01:57:29 by kecheong         ###   ########.fr       */
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
	const std::string	type;

public:
	AMateria(); // default constructor
	AMateria(std::string const&); // constructor
	AMateria(const AMateria&); // copy constructor
	virtual ~AMateria(); // destructor
	AMateria&	operator=(const AMateria&); // copy assignment operator

	std::string const&	getType() const; // Returns the materia type
	virtual AMateria*	clone() const = 0; // Returns a new instance of the materia
	virtual void		use(ICharacter& target); // Use the materia on a target
};

#endif
