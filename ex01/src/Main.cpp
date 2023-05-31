/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 10:40:44 by afavre            #+#    #+#             */
/*   Updated: 2023/05/18 10:40:46 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main()
{
    int nbZombie = 5;
    Zombie *z = zombieHorde(nbZombie, "ducon");

    for (int i = 0; i < nbZombie; i++)
        z[i].announce();
    delete []z;
    return (0);
}
