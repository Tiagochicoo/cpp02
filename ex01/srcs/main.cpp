/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 09:45:16 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/11 14:55:45 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b(42);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(42.0f);
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;

	return 0;
}

//https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/