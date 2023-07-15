/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:37:41 by simao             #+#    #+#             */
/*   Updated: 2023/07/15 17:45:42 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

		/********************************/
		/* CONSTRUCTORS AND DESTRUCTOR */
		/******************************/
ClapTrap::ClapTrap(std::string name) : name(name), HP(10), stamina(10), atk_dmg(0)
{
    std::cout << "Constructor called. Initialized with value: " << this->name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    this->name = obj.name;
    this->HP = obj.HP;
    this->stamina = obj.stamina;
    this->atk_dmg = obj.atk_dmg;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called." << std::endl;
}

		/*****************************/
		/** CLASS MEMBER FUNCTIONS **/
		/***************************/
void    ClapTrap::attack(const std::string& target)
{
    if (this->stamina == 0)
    {
        std::cout << "No stamina left to attack." << std::endl;
        return;
    }
    this->stamina -= 1;
    std::cout << "ClapTrap " << this->name << " attacks " << target << " and deals " << this->atk_dmg << " damage." << std::endl;
}

void    ClapTrap::takeDamage(unsigned int ammount)
{
	this->HP -= ammount;
	if (this->HP < 0)
		this->HP = 0;
    std::cout << "ClapTrap " << this->name << " has received " << ammount << " damage points." << std::endl;
	std::cout << "ClapTrap " << this->name << " has " << this->HP << " HP points left." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int ammount)
{
	if (this->HP == 0)
	{
		std::cout << "ClapTrap " << this->name << " has no HP." << std::endl;
		return;
	}
	if (this->stamina == 0)
	{
		std::cout << "ClapTrap " << this->name << "has no stamina left to repair." << std::endl;
		return;
	}
	this->stamina -= 1;
	std::cout << "ClapTrap repairs " << ammount << " hit point(s)." << std::endl;
}