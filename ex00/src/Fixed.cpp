/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 18:03:20 by chtan             #+#    #+#             */
/*   Updated: 2025/04/20 14:28:23 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

// default constructor
Fixed::Fixed(void) {
	std::cout << GREEN_H << "Default constructor called" << RESET_H << std::endl;
    setRawBits(0);
	return ;
}

// // copy constructor
Fixed::Fixed(const Fixed &tocopy) : _rawBits(tocopy._rawBits) {
	std::cout << GREEN_H << "Copy constructor called" << RESET_H << std::endl;
}

// Fixed::Fixed(const Fixed &toCopy) {
// 	std::cout << GREEN_H << "Copy constructor called" << RESET_H <<std::endl;
// 	*this = toCopy;
// 	return ;
// }

// copy assignment operator
// Checks if this != &rhs (not self-assigning) and avoid self assigement. prevent potential memory leaks
Fixed &Fixed::operator=(const Fixed &rhs) {
	std::cout << GREEN_H << "Copy assignment operator called" << RESET_H <<std::endl;
	if (this == &rhs)
		return (*this);
	this->_rawBits = rhs.getRawBits();
	return (*this);
}

/**
 * @brief Default Destructor
 */
Fixed::~Fixed(void) {
	std::cout << RED_H << "Destructor called" << RESET_H <<std::endl;
	return ;
}

// member functions to access private member variable
int	Fixed::getRawBits(void) const {
	std::cout << BLUE_H << "getRawBits member function called" << RESET_H << std::endl;
	return (this->_rawBits);
}

// member function to set private member variable
void	Fixed::setRawBits(const int raw) {
	this->_rawBits = raw;
	return ;
}
