/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davli <davli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:27:17 by davli             #+#    #+#             */
/*   Updated: 2024/11/14 14:27:27 by davli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : type("Unknown") {};

const std::string& Weapon::getType() const{
    return (type);
}

void    Weapon::setType(const std::string& newType){
    type = newType;
}