/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:49:02 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/02 18:12:28 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void
test_subject_pdf();

void
test_wrong_implementation();

void
test_subtype_polymorphism();

int main()
{
	test_subject_pdf();
	test_wrong_implementation();
	test_subtype_polymorphism();

	return 0;
}

void	test_subject_pdf()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
}

void	test_wrong_implementation()
{
	const WrongAnimal*	wrongAnimal = new WrongAnimal();
	const WrongAnimal*	wrongCat = new WrongCat();

	wrongAnimal->makeSound();
	wrongCat->makeSound();

	delete wrongAnimal;
	delete wrongCat;
}

void	test_subtype_polymorphism()
{
	std::cout << "\nCreating an array of 10 dogs and cats" << std::endl;

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

	std::cout << "\nAnimals start making noise" << std::endl;
	for (int i =0; i < 20; i++)
	{
		animals[i]->makeSound();
	}

	delete []dogs;
	delete []cats;
}
