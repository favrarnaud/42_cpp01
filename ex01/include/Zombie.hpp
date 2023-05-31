/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 10:41:09 by afavre            #+#    #+#             */
/*   Updated: 2023/05/18 10:41:12 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
public:
    Zombie();
    Zombie(std::string);
    ~Zombie();

    void announce();
    void setName(std::string name);
private:
    std::string name;
};

Zombie* newZombie(std::string name);
Zombie* zombieHorde( int n, std::string name );

#endif