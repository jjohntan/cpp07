/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:07:16 by jetan             #+#    #+#             */
/*   Updated: 2025/05/26 19:14:46 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, size_t len, void(*f)(T const &))
{
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}

template <typename T>
void print(T const &x)
{
	std::cout << x << std::endl;
}

#endif