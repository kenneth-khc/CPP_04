/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:49:02 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/12 17:42:04 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void
testSubjectPDF();

/* Animal
testAbstractClass(); */

void
testPointersAndReferences();

int main()
{
	testSubjectPDF();
	// testAbstractClass();
	// testPointersAndReferences();
	return 0;
}

void	testSubjectPDF()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	std::cout << '\n';
	delete j;
	delete i;

	/* Attempt to create an Animal object which is abstract */

/* 	const Animal* meta = new Animal();
	meta->makeSound();
	delete meta; */
}

/* Animal	testAbstractClass()
{
	return Animal();
} */

void	testPointersAndReferences()
{
	Animal*	ptr = new Dog(); // OK, a Dog is a type of Animal
	ptr->makeSound();
	std::cout << '\n';
	delete ptr;

	Animal&	ref = *new Cat(); // OK, a Cat is a type of Animal
	ref.makeSound();
	std::cout << '\n';
	delete &ref; // not good practice because it causes confusion, delete with pointer instead
				 // (or don't use new/deletes at all)
}
