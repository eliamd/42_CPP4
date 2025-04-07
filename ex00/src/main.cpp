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
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"

int main() {
	std::cout << "========  Constructors  =========" << std::endl;
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << "========  Type  =========" << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << "========  MakeSound  =========" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << "========  Destructor  =========" << std::endl;
	delete j;
	delete i;
	delete meta;

	std::cout << "========  WrongAnimal  =========" << std::endl;
	const WrongAnimal *wrongMeta = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();
	std::cout << "========  Type  =========" << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	std::cout << "========  MakeSound  =========" << std::endl;
	wrongCat->makeSound();
	wrongMeta->makeSound();
	std::cout << "========  Destructor  =========" << std::endl;
	delete wrongCat;
	delete wrongMeta;
	return 0;
}
