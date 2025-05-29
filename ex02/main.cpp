/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:48:55 by jetan             #+#    #+#             */
/*   Updated: 2025/05/29 15:27:51 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

//size
void test_size()
{
	std::cout << "\n-------------------size------------------------" << std::endl;
	Array<int> a(2);
	
	std::cout << "size of a = " << a.size() << std::endl;
}

//index is out of bounds
void index_out_of_bounds()
{
	std::cout << "\n----------------index out of bounds----------" << std::endl;
	Array<int> out1(2);
	try
	{
		out1[3] = 42;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

//copy and assignment operator
void copy_assignment_operator()
{
	std::cout << "\n------------copy assignment operator------------" << std::endl;
	Array<int> original_int(2);
	
	original_int[0] = 1;
	original_int[1] = 2;
	
	for	(unsigned int i = 0; i < original_int.size(); i++)
	{
		std::cout << "original_int[" << i << "] = ";
		std::cout << original_int[i] << std::endl;
	}
	Array<int> copy_int;
	
	copy_int = original_int;
	copy_int[1] = 3;
	
	for (unsigned int i = 0; i < copy_int.size(); i++)
	{
		std::cout << "copy_int[" << i << "] = ";
		std::cout << copy_int[i] << std::endl;
	}
	
	Array<char> original_char(2);
	
	original_char[0] = 'A';
	original_char[1] = 'B';
	
	for	(unsigned int i = 0; i < original_char.size(); i++)
	{
		std::cout << "original_char[" << i << "] = ";
		std::cout << original_char[i] << std::endl;
	}
	Array<char> copy_char;
	
	copy_char = original_char;
	copy_char[1] = 'C';
	
	for (unsigned int i = 0; i < copy_char.size(); i++)
	{
		std::cout << "copy_char[" << i << "] = ";
		std::cout << copy_char[i] << std::endl;
	}
}

void copy_constructor()
{
	std::cout << "\n------------copy constructor------------" << std::endl;
	//integer
	Array<int> original(3);
	original[0] = 1;
	original[1] = 2;
	original[2] = 3;
	
	Array<int> copy(original);
	
	original[0] = 4;//deep copy test
	
	std::cout << "original[0] = " << original[0] << std::endl;
	std::cout << "copy[0] = " << copy[0] << std::endl;
	//string
	Array<std::string> original2(1);
	
	original2[0] = "Hello!";
	
	Array<std::string> copy2(original2);
	
	original2[0] = "Bye!";
	
	std::cout << "original[0] = " << original2[0] << std::endl;
	std::cout << "copy[0] = " << copy2[0] << std::endl;
}

//Creates an array of n elements initialized by default
void array_of_elements()
{
	std::cout << "\n------------array_of_elements------------" << std::endl;
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
}

//Creates an empty array
void empty_array()
{
	std::cout << "------------empty array------------------" << std::endl;
	Array<int> empty;
	
	std::cout << "empty array = " << empty.size() << std::endl;
}

int main()
{
	empty_array();
	array_of_elements();
	copy_constructor();
	copy_assignment_operator();
	index_out_of_bounds();
	test_size();
}