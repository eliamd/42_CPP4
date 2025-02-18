/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edetoh <edetoh@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:04:41 by edetoh            #+#    #+#             */
/*   Updated: 2025/02/14 12:09:26 by edetoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main()
{
	const int arraySize = 10;
	const Animal* animals[arraySize];

	for (int i = 0; i < arraySize / 2; ++i) {
		animals[i] = new Dog();
	}
	for (int i = arraySize / 2; i < arraySize; ++i) {
		animals[i] = new Cat();
	}

	for (int i = 0; i < arraySize; ++i) {
		animals[i]->makeSound();
	}

	for (int i = 0; i < arraySize; ++i) {
		delete animals[i];
	}

	return 0;
}