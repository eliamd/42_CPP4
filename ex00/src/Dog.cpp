//
// Created by Eliam on 18/02/2025.
//

#include "../includes/Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "Dog >>> 🔨 Default constructor called." << std::endl;
}

Dog::Dog(std::string type) {
	(void) type;
	this->type = "Dog";
	std::cout << "Dog >>> 🔨Constructor with arg called." << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	std::cout << "Dog >>> 🔨Copy constructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &copy) {
	this->type = copy.type;
	this->type = "Dog";

	std::cout << "Dog >>> 🔨Assignment constructor called." << std::endl;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Dog >>> 🐶 Woof!" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog >>> 🪓 Destructor called." << std::endl;
}
