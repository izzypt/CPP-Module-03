/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:37:41 by simao             #+#    #+#             */
/*   Updated: 2023/07/15 15:55:08 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name)
{
    std::cout << "Constructor called. Initialized with value: " << this->name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called." << std::endl;
}
