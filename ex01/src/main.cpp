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

int main() {
	const int arraySize = 2; // <==== SIZE
	const Animal *animals[arraySize];

	std::cout << std::endl << "======== ✏️ Constructor ========" << std::endl << std::endl;
	for (int i = 0; i < arraySize / 2; ++i) {
		animals[i] = new Dog();
	}
	for (int i = arraySize / 2; i < arraySize; ++i) {
		animals[i] = new Cat();
	}

	std::cout << std::endl << "======== 🐾 Make sound ========" << std::endl << std::endl;
	for (int i = 0; i < arraySize; ++i) {
		animals[i]->makeSound();
	}

	std::cout << std::endl << "======== 🪓 Destructor ========" << std::endl << std::endl;
	for (int i = 0; i < arraySize; ++i) {
		delete animals[i];
	}

	std::cout << std::endl << "\n=== 😈 Deep Copy Test ===" << std::endl << std::endl;
	Cat original;
	original.set_idea(0, "Manger du poisson");
	original.set_idea(1, "Faire la sieste");

	Cat clone = original;

	std::cout << std::endl << "Original idea 0: " << original.get_idea(0) << std::endl;
	std::cout << "Clone idea 0   : " << clone.get_idea(0) << std::endl;

	clone.set_idea(0, "Niquer le canapé");

	std::cout << "\n =====> 👷‍♂️ Après modification du clone:" << std::endl << std::endl;
	std::cout << "Original idea 0: " << original.get_idea(0) << std::endl;
	std::cout << "Clone idea 0   : " << clone.get_idea(0) << std::endl << std::endl;

	return 0;
}
