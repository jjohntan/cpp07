/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:48:55 by jetan             #+#    #+#             */
/*   Updated: 2025/05/28 14:54:47 by jetan            ###   ########.fr       */
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
	//copy and assignment operator
	Array<int> original(3);
	
	original[0] = 1;
	original[1] = 2;
	std::cout << original[1] << std::endl;
	//size
	
}