/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 19:30:52 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/11 12:47:15 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	private:
		int 				_fixed;
		static const int	_fractional = 0;

	public:

		Fixed();
		Fixed( Fixed const & src );
		~Fixed();

		Fixed &		operator=( Fixed const & rhs );

		int 	getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream &			operator<<( std::ostream & o, Fixed const & i );

#endif /* *********************************************************** FIXED_H */