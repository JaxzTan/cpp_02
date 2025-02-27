/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:22:21 by chtan             #+#    #+#             */
/*   Updated: 2025/02/27 13:15:36 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

# define GREEN_H "\033[0;32m"
# define RESET_H "\033[0m"
# define RED_H "\033[0;31m"
# define BLUE_H "\033[0;34m"
class	Fixed {

	private:
		int					_rawBits;
		static const int	_fractBits = 8;

        public:
        Fixed(void); // Default Constructor
        Fixed(const Fixed &toCopy); // Copy Constructor
        Fixed &operator = (const Fixed &rhs); // Assignment Operator
        ~Fixed(void); // Destructor

        int getRawBits(void) const;
        void setRawBits(const int raw);
};
#endif
