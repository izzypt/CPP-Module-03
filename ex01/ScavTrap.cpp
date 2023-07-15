/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:17:47 by simao             #+#    #+#             */
/*   Updated: 2023/07/15 19:08:42 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::attack(const std::string& target)
{
    if (this->stamina == 0)
    {
        std::cout << "No stamina left to attack." << std::endl;
        return;
    }
    this->stamina -= 1;
    std::cout << "ScavTrap " << this->name << " attacks " << target << " and deals " << this->atk_dmg << " damage." << std::endl;
}
