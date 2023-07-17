/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:04:39 by simao             #+#    #+#             */
/*   Updated: 2023/07/17 18:57:51 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

class FragTrap : public ClapTrap
{
    public:
        FragTrap(const std::string &name);
        ~FragTrap();
        void    highFivesGuys(void);
};

#endif