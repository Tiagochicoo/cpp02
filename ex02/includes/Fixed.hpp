/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 19:30:52 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/12 09:52:37 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	private:
		int 				_fixed;
		static const int	_fractional = 8;

	public:

		Fixed();
		Fixed( Fixed const & src );
		Fixed( const int intValue );
		Fixed( const float floatValue );
		~Fixed();

		Fixed &		operator=( Fixed const & value );
		
		bool		operator>( Fixed const & value );
		bool		operator<( Fixed const & value );
		bool		operator>=( Fixed const & value );
		bool		operator<=( Fixed const & value );
		bool		operator==( Fixed const & value );
		bool		operator!=( Fixed const & value );

		Fixed		operator+( Fixed const & value );
		Fixed		operator-( Fixed const & value );
		Fixed		operator*( Fixed const & value );
		Fixed		operator/( Fixed const & value );

		Fixed		operator++( int );
		Fixed		operator--( int );
		Fixed		&operator++( void );
		Fixed		&operator--( void );

		int 		 getRawBits(void) const;
		void		 setRawBits(int const raw);
		float		 toFloat( void ) const;
		int			 toInt( void ) const;

		Fixed static min(Fixed &a, Fixed &b);
		Fixed static min(const Fixed &a, const Fixed &b);
		Fixed static max(Fixed &a, Fixed &b);
		Fixed static max(const Fixed &a, const Fixed &b);
};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */