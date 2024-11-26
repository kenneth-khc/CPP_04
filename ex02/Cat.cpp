/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:44:05 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/12 17:11:02 by kecheong         ###   ########.fr       */
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
Cat::Cat():
Animal("Cat")
{
	std::cout << GREEN << "Cat default constructor called" << CRESET
			  << std::endl;

	brain = new Brain();
	std::cout << '\n';
}

/* Copy constructor */
Cat::Cat(const Cat& other):
Animal(other)
{
	std::cout << GREEN << "Cat copy constructor called" << CRESET
			  << std::endl;

	if (other.brain)
	{
		this->brain = new Brain(*other.brain); // call Brain's copy constructor
											   // and let it handle its copy
	}
	else
	{
		this->brain = NULL;
	}
	std::cout << '\n';
}

/* Copy assignment operator */
Cat&	Cat::operator=(const Cat& other)
{
	std::cout << GREEN << "Cat copy assignment operator called" << CRESET
			  << std::endl;

	if (this == &other)
	{
		std::cout << "Not copy assigning cat due to self assignment\n"
				  << std::endl;
		return *this;
	}

	Animal::operator=(other);
	delete brain;
	if (other.brain)
	{
		this->brain = new Brain(*other.brain);
	}
	else
	{
		this->brain = NULL;
	}
	std::cout << '\n';
	return *this;
}

/* Destructor */
Cat::~Cat()
{
	std::cout << RED << "Cat destructor called" << CRESET
			  << std::endl;

	delete brain;
}

const std::string&	Cat::getType() const
{
	return type;
}

void	Cat::makeSound() const
{
	std::cout << "Cat is meow meowing" << std::endl;
}
