/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:41:01 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/02 20:44:38 by kecheong         ###   ########.fr       */
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
	~Dog(); // Destructor
	Dog(const Dog&); // Copy constructor
	Dog&	operator=(const Dog&); // Copy assignment operator

	const std::string&	getType() const;
	void				makeSound() const;

private:
	Brain*	brain;
};

#endif
