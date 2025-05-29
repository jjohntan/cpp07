/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:07:19 by jetan             #+#    #+#             */
/*   Updated: 2025/05/29 15:52:03 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	std::cout << "----------int------------" << std::endl;
	int arr[] = {1, 2 , 3};
	
	iter(arr, 3, print);
	
	std::cout << "---------double------------" << std::endl;
	double arr2[] = {1.1, 2.2, 3.3};
	
	iter(arr2, 3, print);
	
	std::cout << "-----------float--------" << std::endl;
	float arr3[] = {1.0f, 1.5f, 2.0f};
	
	iter(arr3, 3, print);
	
	std::cout << "-----------char--------" << std::endl;
	char ch[] = {'A', 'B', 'C'};
	
	iter(ch, 3, print);
	
	std::cout << "-----------string--------" << std::endl;
	std::string str[] = {"Hello", "World!"};
	
	iter(str, 2, print);	
}