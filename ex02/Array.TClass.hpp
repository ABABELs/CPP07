/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.TClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:29:12 by aabel             #+#    #+#             */
/*   Updated: 2024/01/30 13:38:45 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>
# include<ctime>
# include <cstdlib>

template <typename T>
class Array
{
    public:
        Array(void)
        {
            this->_array = new T[0];
            this->_size = 0;
        }
        
        Array(unsigned int n)
        {
            this->_array = new T[n];
            this->_size = n;
        }
        
        Array(Array const & src)
        {
            *this = src;
        }
        
        ~Array(void)
        {
            delete [] this->_array;
        }

        Array & operator=(Array const & rhs)
        {
            if (this != &rhs)
            {
                this->_array = new T[rhs._size];
                this->_size = rhs._size;
                for (unsigned int i = 0; i < this->_size; i++)
                    this->_array[i] = rhs._array[i];
            }
            return (*this);
        }
        
        T & operator[](unsigned int i) const
        {
            if (i >= this->_size)
                throw std::exception();
            return (this->_array[i]);
        }

        unsigned int size(void) const
        {
            return (this->_size);
        }

    private:
        T * _array;
        unsigned int _size;
};

#endif