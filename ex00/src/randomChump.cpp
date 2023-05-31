/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:27:29 by afavre            #+#    #+#             */
/*   Updated: 2023/05/18 11:27:32 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

void randomChump(std::string name)
{
    Zombie *y = new Zombie("ducon");

	std::cout << "ce zombie a ete renomme " << name << " !" << std::endl;
    y->setName(name);
    y->announce();
	delete y;
}

