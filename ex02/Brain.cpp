/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:40:48 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/16 18:37:42 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

/* Color codes */
#define GREEN "\033[0;32m"
#define RED	"\033[0;31m"
#define YELLOW "\033[0;33m"
#define CRESET "\033[0m"

/* Default constructor */
Brain::Brain()
{
	std::cout << GREEN  << "A brain filled with 100 ideas is constructed" << CRESET
			  << std::endl;
}

/* Copy constructor */
Brain::Brain(const Brain& other)
{
	std::cout << GREEN << "Brain's copy constructor called" << CRESET
			  << std::endl;
	*this = other;
}

/* Copy assignment operator */
Brain&	Brain::operator=(const Brain& other)
{
	if (this == &other)
	{
		std::cout << "Not copying assigning brain due to self assignment"
				  << std::endl;
		return *this;
	}
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = other.ideas[i];
	}
	return *this;
}

/* Destructor */
Brain::~Brain()
{
	std::cout << RED << "Brain destructor called" << CRESET
			  << std::endl;
}
