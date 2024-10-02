/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:45:35 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/02 18:01:15 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class	WrongAnimal
{
public:
	WrongAnimal(); // Default constructor
	WrongAnimal(std::string); // Constructor
	WrongAnimal(const WrongAnimal&); // Copy constructor
	WrongAnimal&	operator=(const WrongAnimal&); // Copy assignment operator
	~WrongAnimal(); // Destructor


	const std::string&	getType() const;
	void				makeSound() const;

protected:
	std::string	type;


};

#endif
