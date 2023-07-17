/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:37:38 by simao             #+#    #+#             */
/*   Updated: 2023/07/17 18:59:38 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    FragTrap a("luis");
    FragTrap b("enemy");
    a.attack("enemy");
    a.attack("enemy");
    a.attack("enemy");
    a.attack("enemy");
    a.attack("enemy");
    a.attack("enemy");
    a.attack("enemy");
    a.attack("enemy");
    a.attack("enemy");
    a.attack("enemy");
    a.attack("enemy");
    a.attack("enemy");
    a.attack("enemy");
    a.attack("enemy");
    a.attack("enemy");
    a.highFivesGuys();
    b.takeDamage(80);
    b.beRepaired(110);
    b.attack("luis");
    a.takeDamage(19);
    a.highFivesGuys();

    return (0);
}