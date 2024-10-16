/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:49:02 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/16 18:36:20 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void
testSubjectPDF();

void
testWrongImplementation();

void
testSubtypePolymorphism();

int main()
{
	testSubjectPDF();
	/*testWrongImplementation();*/
	/*testSubtypePolymorphism();*/

	return 0;
}

void	testSubjectPDF()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
}

void	testWrongImplementation()
{
	const WrongAnimal*	wrongAnimal = new WrongAnimal();
	const WrongAnimal*	wrongCat = new WrongCat();

	wrongAnimal->makeSound();
	wrongCat->makeSound();

	std::cout << std::endl;

	delete wrongAnimal;
	delete wrongCat;
}

void	testSubtypePolymorphism()
{
	std::cout << "Creating an array of 10 dogs and cats" << std::endl;

	const Cat*	cats = new Cat[10];
	const Dog*	dogs = new Dog[10];

	const Animal*	animals[20];
	int	j = 0;
	for (int i = 0; i < 20; i++)
	{
		animals[i] = &cats[j];
		i++;
		animals[i] = &dogs[j];
		j++;
	}

	std::cout << "Animals start making noise" << std::endl;
	for (int i =0; i < 20; i++)
	{
		animals[i]->makeSound();
	}
	std::cout << std::endl;

	delete []dogs;
	delete []cats;
}
