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
	std::cout << GREEN << "Cat default constructor called\n" << CRESET
			  << std::endl;
}

/* Copy constructor */
Cat::Cat(const Cat& other)
{
	std::cout << GREEN << "Cat copy constructor called\n" << CRESET
			  << std::endl;

	*this = other;
}

/* Copy assignment operator */
Cat&	Cat::operator=(const Cat& other)
{
	std::cout << GREEN << "Cat copy assignment operator called\n" << CRESET
			  << std::endl;

	this->type = other.type;
	return *this;
}

/* Destructor */
Cat::~Cat()
{
	std::cout << RED << "Cat destructor called" << CRESET
			  << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Cat is meow meowing" << std::endl;
}

const std::string&	Cat::getType() const
{
	return type;
}
