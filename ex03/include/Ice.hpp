/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:02:08 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/16 18:02:57 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class	Ice: public AMateria
{
public:
	Ice(); // default constructor
	Ice(const Ice&); // copy constructor
	Ice&	operator=(const Ice&); // copy assignment operator
	~Ice(); // destructor

	AMateria*	clone() const; // override
	void		use(ICharacter& target); // override

private:

};

#endif
