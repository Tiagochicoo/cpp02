/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 19:30:47 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/11 13:04:21 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	this->_fixed = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed( const Fixed & src )
{
	(void)src;
	std::cout << "Copy constructor called\n";
	// std::cout << src << "\n";
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	if ( this != &rhs )
		this->_fixed = rhs.getRawBits();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	std::cout << "Copy assignment operator called\n";
	o << i.getRawBits();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return this->_fractional;
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
	std::cout << "setRawBits member function called\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */