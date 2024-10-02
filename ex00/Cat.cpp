/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:44:05 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/02 17:43:28 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

/* Color codes */
#define GREEN "\033[0;32m"
#define RED	"\033[0;31m"
#define YELLOW "\033[0;33m"
#define CRESET "\033[0m"

/* Default constructor */
Cat::Cat(): Animal("Cat")
{
	std::cout << GREEN << "Cat default constructor" << CRESET << std::endl;
}

/* Copy constructor */
Cat::Cat(const Cat& other)
{
	*this = other;
}

/* Copy assignment operator */
Cat&	Cat::operator=(const Cat& other)
{
	this->type = other.type;
	return *this;
}

/* Destructor */
Cat::~Cat()
{
	std::cout << RED << "Cat destructor" << CRESET << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Cat is meowing" << std::endl;
}

const std::string&	Cat::getType() const
{
	return type;
}
