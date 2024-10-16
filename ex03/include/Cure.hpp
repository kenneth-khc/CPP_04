/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:07:16 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/16 18:02:52 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Cure: public AMateria
{
public:
	Cure(); // default constructor
	Cure(const Cure&); // copy constructor
	Cure&	operator=(const Cure&); // copy assignment operator
	~Cure(); // destructor

	AMateria*	clone() const; // override
	void		use(ICharacter& target); // override
};

#endif
