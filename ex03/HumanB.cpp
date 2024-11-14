/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davli <davli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:36:45 by davli             #+#    #+#             */
/*   Updated: 2024/11/14 14:36:46 by davli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name, Weapon& weapon) : name(name), weapon(weapon) {};

void    HumanB::attack(){
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}