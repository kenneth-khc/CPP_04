/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:42:31 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/13 01:50:43 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void
testSubjectPDF();

void
testUnequip();

void
testInvalidCharacterIndex();

void
testCharacterDeepCopy();

void
testAMateriaCopy();

void
testIceCopy();

void
testCureCopy();

int main()
{
	testSubjectPDF();
	/*testUnequip();*/
	/*testInvalidCharacterIndex();*/
	/*testCharacterDeepCopy();*/
	/*testAMateriaCopy();*/
	/*testIceCopy();*/
	/*testCureCopy();*/

	return 0;
}

void	testSubjectPDF()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

void	testUnequip()
{
	IMateriaSource*	src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter*	me = new Character("me");

	AMateria*	mat;
	mat = src->createMateria("ice");
	me->equip(mat);

	ICharacter*	target = new Character("Target");
	me->use(0, *target);
	me->unequip(0);

	mat = src->createMateria("cure");
	me->equip(mat);
	me->use(0, *target);

	delete target;
	delete me;
	delete src;
}

void	testInvalidCharacterIndex()
{
	Character	character = Character("Me");
	Character	target = Character("Target");

	Ice*	ice = new Ice();
	character.unequip(0);
	character.unequip(1);
	character.unequip(2);
	character.unequip(3);
	character.unequip(4);
	character.equip(ice);
	character.use(0, target);
	character.use(1, target);
	character.use(2, target);
	character.use(3, target);
	character.use(4, target);

	delete ice;
}

void	testCharacterDeepCopy()
{
	Character	original = Character("Original");
	Cure		cure = Cure();
	original.equip(&cure);
	original.equip(&cure);
	original.equip(&cure);
	original.equip(&cure);

	Character	copy = Character(original);
	Character	target = Character("Target");
	copy.use(0, target);
	copy.use(1, target);
	copy.use(2, target);
	copy.use(3, target);
}

void	testAMateriaCopy()
{
	// AMateria	materia; // Can't instantiate an abstract class

// Call copy constructor 
	/*Ice			ice = Ice();*/
	/*AMateria*	newIce = new Ice(ice);*/
	/*std::cout << "Type: " << newIce->getType() << std::endl;*/
	/*delete newIce;*/
}

void	testIceCopy()
{
	Ice	i1 = Ice();
	Ice	i2 = Ice(i1);

	std::cout << "Type of i1: " << i1.getType() << std::endl;
	std::cout << "Type of i2: " << i2.getType() << std::endl;
}

void	testCureCopy()
{
	Cure	c1 = Cure();
	Cure	c2 = Cure(c1);

	std::cout << "Type of c1: " << c1.getType() << std::endl;
	std::cout << "Type of c2: " << c2.getType() << std::endl;
}
