/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.Temp.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:49:40 by aabel             #+#    #+#             */
/*   Updated: 2024/01/30 12:11:34 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template <typename T>
T const & max(T const & x, T const & y)
{
    return (x > y ? x : y);
}

template <typename T>
T const & min(T const & x, T const & y)
{
    return (x < y ? x : y);
}

template <typename T>
void swap(T & x, T & y)
{
    T tmp = x;
    x = y;
    y = tmp;
}

#endif