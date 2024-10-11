/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:49:02 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/11 21:24:10 by kecheong         ###   ########.fr       */
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
testCatDeepCopy();

void
testDogDeepCopy();

int main()
{
	testSubjectPDF();
	/*testArrayOfAnimals();*/
	/*testCatDeepCopy();*/
	/*testDogDeepCopy();*/

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

void	testCatDeepCopy()
{
	// test copy construct
	const Cat	cat1; // default construct
	const Cat	cat2(cat1); // copy construct
	
	// test copy assignment
	Cat	cat3;
	Cat	cat4;
	cat3 = cat4;

	// test self assignment
	Cat*	catptr = &cat4;
	*catptr = cat4;
}

void	testDogDeepCopy()
{
	const Dog	dog1;
	const Dog	dog2(dog1);

	Dog	dog3;
	Dog	dog4;
	dog3 = dog4;

	Dog*	dogptr = &dog4;
	*dogptr = dog4;
}
