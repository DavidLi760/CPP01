/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davli <davli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:07:24 by davli             #+#    #+#             */
/*   Updated: 2024/11/12 16:10:28 by davli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

class Zombie{
    private:
        std::string _name;
    
    public:
        Zombie() : _name("Unnamed") {}
        Zombie(const std::string& zombie_name) : _name(zombie_name) {}

        void    announce() const{
            std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
        }
        ~Zombie(){
            std::cout << _name << " is destroyed." << std::endl;
        }
};

Zombie* zombieHorde(int N, std::string _name);

#endif
