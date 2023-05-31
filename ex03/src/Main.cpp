/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:03:00 by afavre            #+#    #+#             */
/*   Updated: 2023/05/18 13:03:02 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "../include/HumanA.hpp"
#include "../include/HumanB.hpp"
#include "../include/Weapon.hpp"

int main()
{
    Weapon arme = Weapon("un morceau de réglisse (oui c'est dangeureux)");

    std::cout << "Humain de type A (arme obligatoire)" << std::endl;
    HumanA humA("ducon", arme);
    humA.attack();
    arme.setType("un morceau de marshmallow (c'est peut etre un peu moin dangeureux ^^)");
    humA.attack();

    std::cout << "Humain de type B (arme non obligatoire)" << std::endl;
    Weapon arme2 = Weapon("un morceau de réglisse (oui c'est dangeureux)");
    HumanB humB("lajoie");
    humB.attack();
    humB.setWeapon(&arme2);
    humB.attack();
    arme2.setType("un morceau de marshmallow (c'est peut etre un peu moin dangeureux ^^)");
    humB.attack();
}