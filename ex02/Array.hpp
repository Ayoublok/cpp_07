/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayylaaba <ayylaaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:26:52 by ayylaaba          #+#    #+#             */
/*   Updated: 2023/12/19 09:55:56 by ayylaaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>


template <typename T>

class Array
{
    private:
        T   *arr;
        unsigned int N;
    public:
        Array()
        {
            arr = NULL;
            N = 0;
        };
        Array(unsigned int  size)
        {
            N = size;
            arr = new T[N]();
        };
        Array(const Array& copy)
        {
            arr = NULL;
            *this = copy;
        }
        Array&  operator=(const Array& c_arr)
        {
            if (this != &c_arr)
            {
                delete [] arr;
                N = c_arr.N;
                arr = new T[N]();
                for (unsigned int i = 0 ; i < N; i++)
                    arr[i] = c_arr.arr[i];
            }
            return (*this);
        }
        unsigned int    size()
        {
            return (N);
        }
        T&      operator [](unsigned int n)
        {
            if (n < this->size())
            {
                return arr[n];
            }
            throw   OutOfRange();
        };
        ~Array() { delete []arr; };
        class OutOfRange : public std::exception
        {
            public:
                const char*     what() const throw()
                {
                    return (" Out_Of_Range \n");
                };
        };
};

#endif
