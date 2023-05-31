/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:05:49 by afavre            #+#    #+#             */
/*   Updated: 2023/05/18 13:05:51 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "../include/Weapon.hpp"

class HumanB {
public:
    HumanB(std::string name);
    ~HumanB();

    void attack();
    void setWeapon(Weapon *arme);
private:
    std::string name;
    Weapon *arme;
};

#endif