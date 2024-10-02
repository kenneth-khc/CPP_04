/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:55:43 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/02 21:12:49 by kecheong         ###   ########.fr       */
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
	std::cout << GREEN
			  << "Dog default constructor"
			  << CRESET
			  << std::endl;

	brain = new Brain();
	std::cout << '\n';
}

/* Copy constructor */
Dog::Dog(const Dog& other)
{
	*this = other;
}

/* Copy assignment operator */
Dog&	Dog::operator=(const Dog& other)
{
	this->type = other.type;
	return *this;
}

/* Destructor */
Dog::~Dog()
{
	std::cout << '\n'
			  << RED
			  << "Dog destructor"
			  << CRESET
			  << std::endl;

	delete brain;
}

const std::string&	Dog::getType() const
{
	return type;
}

void	Dog::makeSound() const
{
	std::cout << "Dog is barking" << std::endl;
}
