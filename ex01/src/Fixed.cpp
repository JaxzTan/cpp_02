/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:08:02 by chtan             #+#    #+#             */
/*   Updated: 2025/04/21 18:12:46 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

// Default constructor
Fixed::Fixed(void){
	std::cout << GREEN_H << "Default constructor called" << RESET_H << std::endl;
	this->_rawBits = 0;
    return ;
}

// Int constructor
// This constructor takes an integer and converts it to a fixed-point number
Fixed::Fixed(const int nb) {
	std::cout << GREEN_H <<"Int constructor called" << RESET_H <<std::endl;
	this->_rawBits = (nb * (1 << _fractBits));
	return ;
}

Fixed::Fixed(const float nb) {
	std::cout << GREEN_H << "Float constructor called" << RESET_H << std::endl;
	this->_rawBits = roundf(nb * (1 << _fractBits));
	return ;
}

Fixed::Fixed(const Fixed &toCopy) {
	std::cout << GREEN_H << "Copy constructor called"<< RESET_H << std::endl;
	*this = toCopy;
	return ;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
	std::cout << GREEN_H << "Copy assignment operator called" << RESET_H  << std::endl;
	if (this == &rhs)
		return (*this);
	this->_rawBits = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << RED_H << "Destructor called" << RESET_H << std::endl;
	return ;
}

int	Fixed::toInt(void) const {
	return (this->_rawBits / (1 << this->_fractBits));
}

//static_cast is used to convert the fixed-point number to a float
// The fixed-point number is divided by 2^_fractBits to get the float value
float	Fixed::toFloat(void) const {
	return static_cast<float>(this->_rawBits) / (1 << this->_fractBits);
}

int	Fixed::getRawBits(void) const {
	return (this->_rawBits);
}

void	Fixed::setRawBits(const int raw) {
	this->_rawBits = raw;
	return ;
}

std::ostream	&operator<<(std::ostream &ostream, const Fixed &fixed) {
	ostream << fixed.toFloat();
	return (ostream);
}
