/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:22:21 by chtan             #+#    #+#             */
/*   Updated: 2025/02/18 14:06:42 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

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
