/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 12:50:22 by afavre            #+#    #+#             */
/*   Updated: 2023/05/19 12:50:24 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
public:
    Harl();
    ~Harl();

    void complain(std::string level);
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
};

#endif