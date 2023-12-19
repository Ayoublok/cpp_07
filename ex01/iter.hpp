/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayylaaba <ayylaaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:26:52 by ayylaaba          #+#    #+#             */
/*   Updated: 2023/12/19 09:32:30 by ayylaaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T_arr, typename T_fun>

void    iter(T_arr* arr, size_t len, void fun(T_fun &))
{
    for (size_t i = 0; i < len; i++)
    {
        fun(arr[i]);
    }
}

template <typename T_fun>

void    fun(T_fun &element)
{
    std::cout << element << "\n";
    
}

#endif
