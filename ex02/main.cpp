/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:48:55 by jetan             #+#    #+#             */
/*   Updated: 2025/05/28 19:18:19 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	//Creates an empty array
	Array<int> empty;
	
	std::cout << "empty array = " << empty.size() << std::endl;
	//Creates an array of n elements initialized by default
	int * a = new int();
	std::cout << *a << std::endl;
	
	Array<int> b(5);
	
	for (unsigned int i = 0; i < b.size(); i++)
		b[i] = i;
	for (unsigned int i = 0; i < b.size(); i++)
	{
		std::cout << "b[" << i << "] = ";
		std::cout << b[i] << std::endl;
	}
	
	Array<std::string> str(2);
	
	str[0] = "Hello";
	str[1] = "World!";
	for (unsigned int i = 0; i < str.size(); i++)
	{
		std::cout << "str[" << i << "] = ";
		std::cout << str[i] << std::endl;
	}
	//copy and assignment operator
	Array<int> original(2);
	
	original[0] = 1;
	original[1] = 2;
	
	for	(unsigned int i = 0; i < original.size(); i++)
	{
		std::cout << "original[" << i << "] = ";
		std::cout << original[i] << std::endl;
	}
	Array<int> copy;
	
	copy = original;
	copy[1] = 3;
	
	for (unsigned int i = 0; i < copy.size(); i++)
	{
		std::cout << "copy[" << i << "] = ";
		std::cout << copy[i] << std::endl;
	}
	
	//index is out of bounds
	try
	{
		Array<int> out1(2);
		out1[3] = 42;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	//size
	Array<int> c(2);
	
	std::cout << c.size() << std::endl;
	
	delete a;
}