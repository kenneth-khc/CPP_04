/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:55:43 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/02 17:43:53 by kecheong         ###   ########.fr       */
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
}

/* Copy constructor */
Dog::Dog(const Dog& other)
{
	std::cout << GREEN << "Dog copy constructor called" << CRESET
			  << std::endl;

	*this = other;
}

/* Copy assignment operator */
Dog&	Dog::operator=(const Dog& other)
{
	std::cout << GREEN << "Dog copy assignment operator called" << CRESET
			  << std::endl;

	this->type = other.type;
	return *this;
}

/* Destructor */
Dog::~Dog()
{
	std::cout << RED << "Dog destructor called" << CRESET
			  << std::endl;
}

const std::string&	Dog::getType() const
{
	return type;
}

void	Dog::makeSound() const
{
	std::cout << "Dog is woof woofing" << std::endl;
}
