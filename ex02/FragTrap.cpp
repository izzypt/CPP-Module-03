/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:04:36 by simao             #+#    #+#             */
/*   Updated: 2023/07/17 18:53:16 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	this->HP= 100;
	this->stamina= 100;
	this->atk_dmg= 30;
	std::cout << "Fragtrap constructor called for " << name << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Fragtrap destructor called for " << name << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->HP)
        std::cout << this->name << " asks for a high five !" << std::endl;
    else
        std::cout << this->name << " is dead, can't high five !" << std::endl;
}
