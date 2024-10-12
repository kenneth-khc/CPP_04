/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:39:51 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/12 17:17:35 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class	Animal
{
public:
	Animal(); // Default constructor
	Animal(std::string); // Constructor
	Animal(const Animal&); // Copy constructor
	Animal&	operator=(const Animal&); // Copy assignment operator
	virtual ~Animal(); // Destructor

/* A virtual function *can* be overriden,
 * A pure virtual function *must* be overriden */

	virtual	const std::string&	getType() const = 0; // pure virtual
	virtual void				makeSound() const = 0; // pure virtual

protected:
	std::string	type;
};

#endif

