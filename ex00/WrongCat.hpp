/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:46:03 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/02 18:01:45 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
public:
	WrongCat(); // Default constructor
	WrongCat(const WrongCat&); // Copy constructor
	WrongCat&	operator=(const WrongCat&); // Copy assignment operator
	~WrongCat(); // Destructor
	
	/* Member functions */
	const std::string&	getType() const;
	void				makeSound() const;
};

#endif
