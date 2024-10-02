/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:44:05 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/02 22:02:51 by kecheong         ###   ########.fr       */
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
	std::cout << GREEN
			  << "Cat default constructor"
			  << CRESET
			  << std::endl;

	brain = new Brain();
	std::cout << '\n';
}

/* Copy constructor */
Cat::Cat(const Cat& other)
{
	std::cout << GREEN
			  << "Cat copy constructor"
			  << CRESET
			  << std::endl;

	this->type = other.type;
	this->brain = new Brain(); // use new brain instead of the existing brain
	std::cout << '\n';
}

/* Copy assignment operator */
Cat&	Cat::operator=(const Cat& other)
{
	std::cout << GREEN
			  << "Cat copy assignment operator"
			  << CRESET
			  << std::endl;

	if (this == &other)
	{
		std::cout << "Not copy assigning due to self assignment" << std::endl;
		return *this;
	}

	delete brain;
	this->type = other.type;
	this->brain = new Brain();
	std::cout << '\n';
	return *this;
}

/* Destructor */
Cat::~Cat()
{
	std::cout << '\n'
			  << RED
			  << "Cat destructor"
			  << CRESET
			  << std::endl;

	delete brain;
}

void	Cat::makeSound() const
{
	std::cout << "Cat is meowing" << std::endl;
}

const std::string&	Cat::getType() const
{
	return type;
}
