/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:48:55 by jetan             #+#    #+#             */
/*   Updated: 2025/05/27 14:49:46 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	//Creates an empty array
	Array<int> empty;
	//Creates an array of n elements initialized by default
	int * a = new int();
	std::cout << *a << std::endl;
	//deep copy
	int original[] = {1, 2, 3};
	std::cout << original[0] << std::endl;
}