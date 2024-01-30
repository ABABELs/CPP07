/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:59:40 by aabel             #+#    #+#             */
/*   Updated: 2024/01/30 13:27:08 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.Temp.hpp"

static void tupp(std::string const & str)
{
    std::string tmp = str;
    for (size_t i = 0; i < tmp.length(); i++)
        tmp[i] = toupper(tmp[i]);
    std::cout << tmp << std::endl;
}

static void plusone(int const & i)
{
    std::cout << i + 1 << std::endl;
}

int main( void ) 
{
    std::string *str = new std::string[3];
    str[0] = "hello";
    str[1] = "world";
    str[2] = "toi";
    iter(str, 3, tupp);

    int tab[] = {0, 1, 2, 3, 4};
    iter(tab, 5, plusone);
    return 0;
}
