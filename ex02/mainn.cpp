/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainn.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayylaaba <ayylaaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:36:39 by ayylaaba          #+#    #+#             */
/*   Updated: 2023/12/19 09:57:14 by ayylaaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int     main()
{
    Array<int>  intarr(5);
    Array<int>  test(intarr);
    
    try
    {
        intarr[4] = 5;
        std::cout << "\n value of index 0 = " << intarr[4] << "\n\n";
        
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    try
    {
        intarr[-4] = 5;
        std::cout << " value of index 0 = " << intarr[4] << "\n";
        
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
        try
    {
        intarr[5] = 5;
        std::cout << " value of index 0 = " << intarr[4] << "\n";
        
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
}
