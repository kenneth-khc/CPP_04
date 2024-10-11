/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:49:02 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/02 22:35:01 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void
testSubjectPDF();

void
testArrayOfAnimals();

void
testDeepCopy();

int main()
{
	testSubjectPDF();
	/*testArrayOfAnimals();*/
	/*testDeepCopy();*/

	return 0;
}

void	testSubjectPDF()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
}

void	testArrayOfAnimals()
{
	std::cout << "\nCreating an array of 10 dogs and 10 cats" << std::endl;

	const Animal*	animals[20];
	for (int i = 0; i < 20; i++)
	{
		animals[i] = new Cat();
		i++;
		animals[i] = new Dog();
	}
	std::cout << "\nLooping over the array to delete each animal" << std::endl;
	for (int i = 0; i < 20; i++)
	{
		/* Animal's destructor is virtual so it will call the correct
		 * Cat/Dog destructor before the base destructor */
		delete animals[i];
	}
}

void	testDeepCopy()
{
	// test copy construct
	const Cat	cat1; // default construct
	const Cat	cat2(cat1); // copy construct

	// test copy assignment
	Cat	cat3;
	Cat	cat4;
	cat3 = cat4;

	// test self assignment
	Cat*	ptr = &cat4;
	*ptr = cat4;
}

