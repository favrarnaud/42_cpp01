/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:36:45 by afavre            #+#    #+#             */
/*   Updated: 2023/05/18 11:36:49 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde( int n, std::string name )
{
    Zombie *horde = new Zombie[n];

    for (int i = 0; i < n; i++)
        horde[i].setName(name);
    return (horde);
}