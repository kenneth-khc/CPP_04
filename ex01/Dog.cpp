/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:55:43 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/11 21:13:57 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

/* Color codes */
#define GREEN "\033[0;32m"
#define RED	"\033[0;31m"
#define YELLOW "\033[0;33m"
#define CRESET "\033[0m"

/* Default constructor */
Dog::Dog(): Animal("Dog")
{
	std::cout << GREEN << "Dog default constructor called" << CRESET
			  << std::endl;

	brain = new Brain();
	std::cout << '\n';
}

/* Copy constructor */
Dog::Dog(const Dog& other)
{
	std::cout << GREEN << "Dog copy constructor called" << CRESET
			  << std::endl;
	this->type = other.type;
	if (other.brain)
	{
		this->brain = new Brain(*other.brain);
	}
	else
	{
		this->brain = NULL;
	}
	std::cout << '\n';
}

/* Copy assignment operator */
Dog&	Dog::operator=(const Dog& other)
{
	std::cout << GREEN << "Dog copy assignment operator called" << CRESET
			  << std::endl;

	if (this == &other)
	{
		std::cout << "Not copy assigning dog due to self assignment\n"
				  << std::endl;
		return *this;
	}

	this->type = other.type;
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
Dog::~Dog()
{
	std::cout << RED << "Dog destructor called" << CRESET
			  << std::endl;

	delete brain;
}

const std::string&	Dog::getType() const
{
	return type;
}

void	Dog::makeSound() const
{
	std::cout << "Dog is woof woofing" << std::endl;
}
