/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:41:08 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/02 21:44:00 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public Animal
{
public:
	Cat(); // Default constructor
	Cat(const Cat&); // Copy constructor
	Cat&	operator=(const Cat&); // Copy assignment operator
	~Cat(); // Destructor
	
	const std::string&	getType() const;
	void				makeSound() const;

private:
public:
	Brain*	brain;
};

#endif
