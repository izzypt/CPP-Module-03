/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:36:31 by simao             #+#    #+#             */
/*   Updated: 2023/07/15 19:22:21 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

/* Libraries */
#include "ClapTrap.hpp"

/* Classes */
class ScavTrap : public ClapTrap
{
	public:
        ScavTrap(const std::string &name) : ClapTrap(name) {};
        void            attack(const std::string &target);
		bool            guardGate();
};

#endif

