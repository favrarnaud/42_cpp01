/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afavre <afavre@student.42lausanne.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:44:08 by afavre            #+#    #+#             */
/*   Updated: 2023/05/18 12:44:10 by afavre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string value = "HI THIS IS BRAIN";
    std::string *ptr = &value;
    std::string &ref = value;

    std::cout << "string address : " << &value << std::endl;
    std::cout << "string PTR :     " << ptr << std::endl;
    std::cout << "string REF :     " << &ref << std::endl << std::endl;

    std::cout << "Original string : " << value << std::endl;
    std::cout << "PTR :             " << *ptr << std::endl;
    std::cout << "REF :             " << ref << std::endl;
}