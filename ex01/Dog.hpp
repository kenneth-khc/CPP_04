/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:41:01 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/11 21:20:16 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public Animal
{
public:
	Dog(); // Default constructor
	Dog(const Dog&); // Copy constructor
	Dog&	operator=(const Dog&); // Copy assignment operator
	~Dog(); // override // Destructor

	/* Member functions */
	const std::string&	getType() const; // override
	void				makeSound() const; // override

private:
	Brain*	brain;
};

#endif
