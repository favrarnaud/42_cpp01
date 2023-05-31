/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:05:06 by afavre            #+#    #+#             */
/*   Updated: 2023/05/18 13:05:08 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"


HumanB::HumanB(std::string name): name(name)
{
    this->arme = NULL;
}

HumanB::~HumanB(){}

void HumanB::attack()
{
    if (arme != NULL)
        std::cout << this->name << " vient mollester son adverssaire avec " << this->arme->getType() << " !" << std::endl;
    else
        std::cout << this->name << " vient mettre une baffe a son adverssaire !" << std::endl;
}

void HumanB::setWeapon(Weapon *arme)
{
    this->arme = arme;
}
