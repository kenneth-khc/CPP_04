/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:39:51 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/02 17:44:18 by kecheong         ###   ########.fr       */
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


	virtual	const std::string&	getType() const;
	virtual void				makeSound() const;

protected:
	std::string	type;

};

#endif

