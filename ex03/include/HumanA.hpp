/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 13:05:33 by afavre            #+#    #+#             */
/*   Updated: 2023/05/18 13:05:34 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "../include/Weapon.hpp"

class HumanA {
public:
    HumanA(std::string name, Weapon &arme);
    ~HumanA();

    void attack();
private:
    std::string name;
    Weapon &arme;
};

#endif
