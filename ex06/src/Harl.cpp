/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 12:38:41 by afavre            #+#    #+#             */
/*   Updated: 2023/05/19 12:38:43 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug()
{
    std::cout << "Bonjour, est-t-il possible de me rembourser ?" << std::endl;
}

void Harl::info()
{
    std::cout << "Vous voulez dire que mon ticket est trop vieux ?" << std::endl;
}

void Harl::warning()
{
    std::cout << "Mais je vous ai achetter ce téléphone il y a trois jours !" << std::endl;
}

void Harl::error()
{
    std::cout << "Allez chercher votre supérieur immédiatement !" << std::endl;
}

void Harl::complain(std::string level) {
    int selectedComplaint = -1;
//    void (Harl::*clist[])(void) = {
//            &Harl::debug,
//            &Harl::info,
//            &Harl::warning,
//            &Harl::error,
//    };
//
    std::string type[] = {
            "debug",
            "info",
            "warning",
            "error",
    };

    for (int i = 0; i < 4; i++) {
        if (level.compare(type[i]) == 0)
            selectedComplaint = i;
    }
    switch (selectedComplaint) {
        case 0:
            this->debug();
        case 1:
            this->info();
        case 2:
            this->warning();
        case 3:
            this->error();
            break;
        default:
            std::cout << "Mais de quoi je voulais me plaindre moi en faite ?" << std::endl;
    }
}
