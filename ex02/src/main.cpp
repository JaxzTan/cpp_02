/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 18:22:53 by chtan             #+#    #+#             */
/*   Updated: 2025/04/20 14:02:59 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;        // 0
    std::cout << ++a << std::endl;      // 0.00390625
    std::cout << a << std::endl;        // 0.00390625
    std::cout << a++ << std::endl;      // 0.00390625
    std::cout << a << std::endl;        // 0.0078125
    std::cout << b << std::endl;        // 10.1016   
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}

//result
// 0
// 0.00390625
// 0.00390625
// 0.00390625
// 0.0078125
// 10.1016
// 10.1016

// int	main(void) {
// 	std::cout << std::endl;
// 	std::cout << "=== SUBJECT TESTS ===" << std::endl;
// 	std::cout << std::endl;

// 	Fixed	a;
// 	Fixed	const b(Fixed(5.05f) * Fixed(2));
	
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max(a, b) << std::endl;
	
// 	std::cout << std::endl;
// 	std::cout << "=== OPERATORS TESTS ===" << std::endl;
// 	std::cout << std::endl;
// 	Fixed	i(4.2f);
// 	Fixed	j(6.3f);

// 	std::cout << "i is " << i << std::endl;
// 	std::cout << "j is " << j << std::endl;
// 	std::cout << "i + j = " << (i + j) << std::endl;
// 	std::cout << "i - j = " << (i - j) << std::endl;
// 	std::cout << "i * j = " << (i * j) << std::endl;
// 	std::cout << "i / j = " << (i / j) << std::endl;

// 	std::cout << std::endl;
// 	std::cout << "=== COMPARISONS TESTS ===" << std::endl;
// 	std::cout << std::endl;
// 	Fixed	k(j);

// 	std::cout << "i is " << i << std::endl;
// 	std::cout << "j is " << j << std::endl;
// 	std::cout << "k is " << k << std::endl;
// 	std::cout << "i > j = " << (i >  j)<< std::endl;
// 	std::cout << "i < j = " << (i <  j)<< std::endl;
// 	std::cout << "i >= j = " << (i >= j)<< std::endl;
// 	std::cout << "i <= j = " << (i <= j)<< std::endl;
// 	std::cout << "i == j = " << (i == j)<< std::endl;
// 	std::cout << "i != j = " << (i != j)<< std::endl;
// 	std::cout << std::endl;
// 	std::cout << "i > k = " << (i >  k)<< std::endl;
// 	std::cout << "i < k = " << (i <  k)<< std::endl;
// 	std::cout << "i >= k = " << (i >= k)<< std::endl;
// 	std::cout << "i <= k = " << (i <= k)<< std::endl;
// 	std::cout << "i == k = " << (i == k)<< std::endl;
// 	std::cout << "i != k = " << (i != k)<< std::endl;
// 	std::cout << std::endl;
// 	std::cout << "j > k = " << (j >  k)<< std::endl;
// 	std::cout << "j < k = " << (j <  k)<< std::endl;
// 	std::cout << "j >= k = " << (j >= k)<< std::endl;
// 	std::cout << "j <= k = " << (j <= k)<< std::endl;
// 	std::cout << "j == k = " << (j == k)<< std::endl;
// 	std::cout << "j != k = " << (j != k)<< std::endl;

// 	std::cout << std::endl;
// 	std::cout << "=== MAX/MIN TESTS ===" << std::endl;
// 	std::cout << std::endl;
// 	std::cout << "i is " << i << std::endl;
// 	std::cout << "j is " << j << std::endl;
// 	std::cout << "k is " << k << std::endl;
// 	std::cout << "Fixed::max(i, j): " << Fixed::max(i, j) << std::endl;
// 	std::cout << "Fixed::max(i, k): " << Fixed::max(i, k) << std::endl;
// 	std::cout << "Fixed::max(j, k): " << Fixed::max(j, k) << std::endl;
// 	std::cout << "Fixed::min(i, j): " << Fixed::min(i, j) << std::endl;
// 	std::cout << "Fixed::min(i, k): " << Fixed::min(i, k) << std::endl;
// 	std::cout << "Fixed::min(j, k): " << Fixed::min(j, k) << std::endl;
// 	std::cout << std::endl;
	
// 	return 0;
// }
