/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 10:52:04 by afavre            #+#    #+#             */
/*   Updated: 2023/05/18 10:52:06 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie()
{
    this->name = "ducon";
    std::cout << this->name << " vient prendre son repas de la décénie !" << std::endl;
}

Zombie::Zombie(std::string name): name(name)
{
    std::cout << this->name << " vient prendre son repas de la décénie !" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name << " nous refait ses adieux !" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->name << " : BrrraaaiiinnnzzzZZZZ" << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}
