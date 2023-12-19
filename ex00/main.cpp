/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayylaaba <ayylaaba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 00:42:27 by ayylaaba          #+#    #+#             */
/*   Updated: 2023/12/18 09:00:56 by ayylaaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Template.hpp"

int     main()
{
    int a = 1;
    int b = 2;

    std::cout << "\n\n\n" << "Before swap" << "\n\n\n" ;
    
    std::cout << "a = " << a << " b = " << b << "\n";
  
    swap(a ,b);
  
    std::cout << "\n\n\n" << "after swap" << "\n\n\n" ;
    
    std::cout << "a = " << a << " b = " << b << "\n";
  
    std::cout << "\n\n\n" << "*************************" << "\n\n\n" ;
    
    std::cout << "max(a, b) = " << max(a, b) << " " << "min(a, b) = " << min(a, b) << "\n";
}

// int main( void ) 
// {
//     int a = 2;
//     int b = 3;
//     ::swap( a, b ); //  scop resoltion operator
//     std::cout << "a = " << a << ", b = " << b << std::endl;
//     std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
//     std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
//     std::string c = "chaine1";
//     std::string d = "chaine2";

//     std::cout << "c      =      " << c << ", d = " << d << std::endl;
//     std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
//     std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
//     return 0;
// }
