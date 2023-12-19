/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayylaaba <ayylaaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:35:08 by ayylaaba          #+#    #+#             */
/*   Updated: 2023/12/16 16:39:12 by ayylaaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>
#include <string>

template <typename t>
void    swap(t& a, t& b)
{
    t tem = a;
    a = b;
    b = tem;
}

template <typename t>
t       max(t& a, t& b)
{
    if (a > b)
        return (a);
    else
    {
        return (b);
    }
}

template <typename t>
t       min(t& a, t& b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

#endif
