/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtan <chtan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 14:40:41 by chtan             #+#    #+#             */
/*   Updated: 2025/04/05 13:02:46 by chtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

# define GREEN_H "\033[0;32m"
# define RESET_H "\033[0m"
# define RED_H "\033[0;31m"
# define BLUE_H "\033[0;34m"
# define YELLOW_H "\033[0;33m"

class	Fixed {

	private:
		int					_rawBits;
		static const int	_fractBits = 8;

	public:
		Fixed(void);
		Fixed(const int nb);
		Fixed(const float nb);
		Fixed(const Fixed &toCopy);
		Fixed &operator = (const Fixed &rhs);
		~Fixed(void);

		int		getRawBits(void) const;
		int		toInt(void) const;
		void	setRawBits(const int raw);
		float	toFloat(void) const;
};

std::ostream	&operator<<(std::ostream &ostream, const Fixed &fixed);

#endif
