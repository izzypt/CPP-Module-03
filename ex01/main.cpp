/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:37:38 by simao             #+#    #+#             */
/*   Updated: 2023/07/17 18:03:02 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(int argc, char **argv)
{
    ScavTrap robot("robot");

    robot.attack("Tiago");
    robot.takeDamage(10); 
    robot.guardGate(); 
}
