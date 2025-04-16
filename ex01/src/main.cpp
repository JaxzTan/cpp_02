/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:40:13 by chtan             #+#    #+#             */
/*   Updated: 2025/04/17 00:07:08 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( 10 ); // Parameterized constructor
Fixed const c( 42.42f );
Fixed const d( b );
a = Fixed( 1234.4321f );
std::cout << "a is " << BLUE_H << a << RESET_H << std::endl;
std::cout << "b is " << BLUE_H << b << RESET_H << std::endl;
std::cout << "c is " << BLUE_H << c << RESET_H << std::endl;
std::cout << "d is " << BLUE_H << d << RESET_H << std::endl;
std::cout << YELLOW_H << "a is " << RESET_H << a.toInt() << " as integer" << std::endl;
std::cout << YELLOW_H << "b is " << RESET_H << b.toInt() << " as integer" << std::endl;
std::cout << YELLOW_H << "c is " << RESET_H << c.toInt() << " as integer" << std::endl;
std::cout << YELLOW_H << "d is " << RESET_H << d.toInt() << " as integer" << std::endl;
return 0;
}
