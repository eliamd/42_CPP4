//
// Created by Eliam on 17/02/2025.
//

#include "../includes/Animal.hpp"

// ─────────────────────────────────── Constructor ───────────────────────────────────

Animal::Animal() {
	this->type = "Default";
	std::cout << ">>> 🔨 Default constructor called." << std::endl;
}

Animal::Animal(std::string type) {
	this->type = type;
	std::cout << ">>> 🔨Constructor with arg called." << std::endl;
}

Animal::Animal(const Animal &copy) : type(copy.type) {
	std::cout << ">>> 🔨Copy constructor called." << std::endl;
}

Animal &Animal::operator=(const Animal &copy) {
	this->type = copy.type;

	std::cout << ">>> 🔨Assignment constructor called." << std::endl;
	return *this;
}

// ─────────────────────────────────── Destructor ────────────────────────────────────

Animal::~Animal() {
	std::cout << ">>> 🪓 Destructor called." << std::endl;
}

// ───────────────────────────────────── Methods ─────────────────────────────────────

void Animal::makeSound() const {
	return;
}

std::string Animal::getType() const {
	return (this->type);
}


