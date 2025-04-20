/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:40:13 by chtan             #+#    #+#             */
/*   Updated: 2025/04/20 14:35:48 by chtan            ###   ########.fr       */
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
std::cout << "a is " << YELLOW_H << a.toInt() << RESET_H << " as integer" << std::endl;
std::cout << "b is " << YELLOW_H << b.toInt() << RESET_H << " as integer" << std::endl;
std::cout << "c is " << YELLOW_H << c.toInt() << RESET_H << " as integer" << std::endl;
std::cout << "d is " << YELLOW_H << d.toInt() << RESET_H << " as integer" << std::endl;
return 0;
}
