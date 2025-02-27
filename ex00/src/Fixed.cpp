/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 18:03:20 by chtan             #+#    #+#             */
/*   Updated: 2025/02/27 13:13:00 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << GREEN_H << "Default constructor called" << RESET_H <<std::endl;
    setRawBits(0);
	return ;
}

Fixed::Fixed(const Fixed &toCopy) {
	std::cout << GREEN_H << "Copy constructor called" << RESET_H <<std::endl;
	*this = toCopy;
	return ;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
	std::cout << GREEN_H << "Copy assignment operator called" << RESET_H << std::endl << std::endl;
	if (this == &rhs)
		return (*this);
	this->_rawBits = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << RED_H << "Destructor called" << RESET_H <<std::endl;
	return ;
}

int	Fixed::getRawBits(void) const {
	std::cout << BLUE_H << "getRawBits member function called" << RESET_H << std::endl;
	return (this->_rawBits);
}

void	Fixed::setRawBits(const int raw) {
	this->_rawBits = raw;
	return ;
}
