/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:37:38 by simao             #+#    #+#             */
/*   Updated: 2023/07/15 17:45:50 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(int argc, char **argv)
{
    ClapTrap robot("Elvis");
    ClapTrap *sam = new ClapTrap("Sam");

    robot.attack("dummy");
    robot.takeDamage(3);
    sam->attack("dummy");
    sam->takeDamage(4);

    delete sam;
}
