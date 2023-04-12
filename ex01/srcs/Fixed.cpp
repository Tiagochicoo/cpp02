/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 19:30:47 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/12 09:05:22 by tpereira         ###   ########.fr       */
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
	this->_fixed = src._fixed;
	std::cout << "Copy constructor called\n";
}

Fixed::Fixed( const int value )
{
	this->_fixed = value * (1 << Fixed::_fractional);
	std::cout << "Integer constructor called\n";
}

Fixed::Fixed( const float value )
{
	this->_fixed = roundf(value * (1 << Fixed::_fractional));
	std::cout << "Float constructor called\n";
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
	std::cout << "Copy assignment operator called\n";
	this->_fixed = rhs._fixed;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Fixed const & i )
{
	o << i.toFloat();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called\n";
	return this->_fixed;
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called\n";
	this->_fixed = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_fixed / (1 << Fixed::_fractional));
}

int Fixed::toInt(void) const
{
	return (this->_fixed >> Fixed::_fractional);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */