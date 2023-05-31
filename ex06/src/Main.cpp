/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 13:48:50 by afavre            #+#    #+#             */
/*   Updated: 2023/05/19 13:48:52 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;

    if (ac == 2)
        harl.complain(av[1]);
    else
        std::cout << "j'en ai marre de me plaindre de tout en faite ..." << std::endl;
}

