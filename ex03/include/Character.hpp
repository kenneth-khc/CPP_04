/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kecheong <kecheong@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 23:12:40 by kecheong          #+#    #+#             */
/*   Updated: 2024/10/13 00:21:59 by kecheong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"

class	Character : public ICharacter
{
public:
	~Character();
	Character(std::string);

	std::string const&	getName() const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);

private:
	std::string	name;
						#define INVENTORY_SIZE 4
	AMateria*			inventory[INVENTORY_SIZE];
	int					index;
};

#endif
