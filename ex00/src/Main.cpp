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
    std::cout << "Standard" << std::endl;
    Zombie z;
    z.announce();

    std::cout << "\nVia allocation memoire" << std::endl;
    Zombie *x = newZombie("lajoie");
    x->announce();
    delete x;

    std::cout << "\nVia fonction creatrice" << std::endl;
    randomChump("l'idiot");
    return (0);
}
