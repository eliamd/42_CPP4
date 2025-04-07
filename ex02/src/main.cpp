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

	// Animal* a = new Animal();

	std::cout << std::endl << "======== ✏️ Constructor ========" << std::endl << std::endl;
	Animal* dog = new Dog();
	Animal* cat = new Cat();

	std::cout << std::endl << "======== 🐾 Make sound ========" << std::endl << std::endl;
	dog->makeSound();
	cat->makeSound();


	std::cout << std::endl << "======== 🪓 Destructor ========" << std::endl << std::endl;
	delete dog;
	delete cat;

	return 0;
}