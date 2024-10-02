/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:40:48 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/02 20:47:05 by kecheong         ###   ########.fr       */
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
	std::cout << GREEN 
			  << "A brain filled with 100 ideas is constructed"
			  << CRESET
			  << std::endl;
}

/* Copy constructor */
Brain::Brain(const Brain& other)
{
	(void)other;
}

/* Copy assignment operator */
Brain&	Brain::operator=(const Brain& other)
{
	(void)other;
	return *this;
}

/* Destructor */
Brain::~Brain()
{
	std::cout << RED
			  << "A brain is destructed"
			  << CRESET
			  << std::endl;
}


