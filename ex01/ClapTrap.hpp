/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:37:35 by simao             #+#    #+#             */
/*   Updated: 2023/07/15 17:26:31 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

/* Libraries */
#include <iostream>
#include <string>

/* Classes */
class ClapTrap
{
    private:
        std::string	name;
        int			HP;
        int			stamina;
		int			atk_dmg;
    public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& obj);
		~ClapTrap();
		void		attack(const std::string& target);
		void		takeDamage(unsigned int ammount);
		void		beRepaired(unsigned int ammount);
};

#endif