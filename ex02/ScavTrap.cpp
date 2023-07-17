/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:17:47 by simao             #+#    #+#             */
/*   Updated: 2023/07/17 18:03:29 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name), guardgate(false)
{
    this->HP = 100;
    this->stamina = 50;
    this->atk_dmg = 20;
	std::cout << "ScavTrap constructed." << std::endl;
};

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructed." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->stamina == 0)
    {
        std::cout << "ScavTrap has no stamina left to attack." << std::endl;
        return;
    }
    this->stamina -= 1;
    std::cout << "ScavTrap " << this->name << " attacks " << target << " and deals " << this->atk_dmg << " damage." << std::endl;
}

bool	ScavTrap::guardGate(void)
{
	this->guardgate = !this->guardgate;
	if (this->guardgate)
		std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
	else
		std::cout << "Gate keeper mode is deactivated." << std::endl;
	return this->guardgate;
}
