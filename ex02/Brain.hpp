/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:38:48 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/02 21:43:53 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class	Brain
{
public:
	Brain(); // Default constructor
	Brain(const Brain&); // Copy constructor
	Brain&	operator=(const Brain&); // Copy assignment operator
	~Brain(); // Destructor

private:
	std::string	ideas[100];
};

#endif
