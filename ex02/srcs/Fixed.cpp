/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 19:30:47 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/12 09:56:45 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed()
{
	this->_fixed = 0;
	// std::cout << "Default constructor called\n";
}

Fixed::Fixed( const Fixed & src )
{
	this->_fixed = src._fixed;
	// std::cout << "Copy constructor called\n";
}

Fixed::Fixed( const int value )
{
	this->_fixed = value * (1 << Fixed::_fractional);
	// std::cout << "Integer constructor called\n";
}

Fixed::Fixed( const float value )
{
	this->_fixed = roundf(value * (1 << Fixed::_fractional));
	// std::cout << "Float constructor called\n";
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	// std::cout << "Destructor called\n";
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &	Fixed::operator=( Fixed const & value )
{
	// std::cout << "Copy assignment operator called\n";
	this->_fixed = value._fixed;
	return *this;
}

/*
	COMPARISON OPERATORS
*/

bool	Fixed::operator>( Fixed const & value )
{
	return (this->_fixed > value.getRawBits() ? 1 : 0);
}

bool	Fixed::operator<( Fixed const & value )
{
	return (this->_fixed < value.getRawBits() ? 1 : 0);
}

bool	Fixed::operator>=( Fixed const & value )
{
	return (this->_fixed >= value.getRawBits() ? 1 : 0);
}

bool	Fixed::operator<=( Fixed const & value )
{
	return (this->_fixed <= value.getRawBits() ? 1 : 0);
}

bool	Fixed::operator==( Fixed const & value )
{
	return (this->_fixed == value.getRawBits() ? 1 : 0);
}

bool	Fixed::operator!=( Fixed const & value )
{
	return (this->_fixed != value.getRawBits() ? 1 : 0);
}

/*
	ARITHMETIC OPERATORS
*/

Fixed	Fixed::operator+( Fixed const & value )
{
	Fixed a(this->toFloat() + value.toFloat());
	return (a);
}

Fixed	Fixed::operator-( Fixed const & value )
{
	Fixed a(this->toFloat() - value.toFloat());
	return (a);
}

Fixed	Fixed::operator*( Fixed const & value )
{
	Fixed a(this->toFloat() * value.toFloat());
	return (a);
}

Fixed	Fixed::operator/( Fixed const & value )
{
	Fixed a(this->toFloat() / value.toFloat());
	return (a);
}

/*
	INCREMENT/DECREMENT OPERATORS
*/

Fixed	Fixed::operator++( int )
{
	Fixed a(this->_fixed * toFloat());
	this->_fixed++;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed a(this->_fixed * toFloat());
	this->_fixed--;
	return (*this);
}

Fixed	&Fixed::operator++( void )
{
	this->_fixed += 1;
	return (*this);
}

Fixed	&Fixed::operator--( void )
{
	this->_fixed -= 1;
	return (*this);
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

Fixed Fixed::min(Fixed & a, Fixed & b)
{
	return (a > b ? b : a);
}

Fixed Fixed::min(const Fixed & a, const Fixed & b)
{
	return ((Fixed &)a > (Fixed &)b ? b : a);
}

Fixed Fixed::max(Fixed & a, Fixed & b)
{
	return (a < b ? b : a);
}

Fixed Fixed::max(const Fixed & a, const Fixed & b)
{
	return ((Fixed &)a < (Fixed &)b ? b : a);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */