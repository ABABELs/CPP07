/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.TClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:29:12 by aabel             #+#    #+#             */
/*   Updated: 2024/02/14 12:31:43 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>
# include <ctime>
# include <cstdlib>
# include <string>

template <typename T>
class Array
{
    private:
        T * _array;
        int _size;
    public:
        class OutOfRangeException : public std::exception
        {
            virtual const char* what() const throw()
            {
                return ("Out of range");
            }
        };
        Array<T>(void)
        {
            this->_array = new T[0];
            this->_size = 0;
        }
        
        Array<T>(int n)
        {
            this->_array = new T[n];
            this->_size = n;
        }
        
        Array<T>(Array const & src)
        {
            *this = src;
        }
        
        ~Array<T>(void)
        {
            if (_array)
                delete [] _array;
        }

        Array<T> & operator=(Array<T> const & rhs)
        {
            if (this != &rhs)
            {
                _size = rhs._size;
                _array = new T[size()];
                for (int i = 0; i < size(); i++)
                    this->_array[i] = rhs._array[i];
            }
            return (*this);
        }
        
        T & operator[](int i)
        {
            if (i >= size() || i < 0)
                throw OutOfRangeException();
            return (_array[i]);
        }

        int size(void)
        {
            return (_size);
        }

};

#endif