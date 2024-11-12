/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davli <davli@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:06:39 by davli             #+#    #+#             */
/*   Updated: 2024/11/12 16:06:46 by davli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    int N = 5;
    Zombie* horde = zombieHorde(N, "Zombie");

    if (horde) {
        for (int i = 0; i < N; ++i) {
            horde[i].announce();
        }

        delete[] horde;
    }
    else {
        std::cout << "Failed to create the zombie horde!" << std::endl;
    }

    return 0;
}
