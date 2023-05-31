/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:04:59 by afavre            #+#    #+#             */
/*   Updated: 2023/05/18 13:05:02 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &arme): name(name), arme(arme) {}


HumanA::~HumanA(){}

void HumanA::attack()
{
    std::cout << this->name << " vient mollester son adverssaire avec " << this->arme.getType() << " !" << std::endl;
}


