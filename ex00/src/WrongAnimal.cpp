//
// Created by Eliam on 07/04/2025.
//

#include "../includes/WrongAnimal.hpp"

// ─────────────────────────────────── Constructor ───────────────────────────────────

WrongAnimal::WrongAnimal() {
	this->type = "Default";
	std::cout << ">>> 🔨 Default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {
	this->type = type;
	std::cout << ">>> 🔨Constructor with arg called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : type(copy.type) {
	std::cout << ">>> 🔨Copy constructor called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy) {
	this->type = copy.type;

	std::cout << ">>> 🔨Assignment constructor called." << std::endl;
	return *this;
}

// ─────────────────────────────────── Destructor ────────────────────────────────────

WrongAnimal::~WrongAnimal() {
	std::cout << ">>> 🪓 Destructor called." << std::endl;
}

// ───────────────────────────────────── Methods ─────────────────────────────────────

void WrongAnimal::makeSound() const {
	return ;
}

std::string WrongAnimal::getType() const {
	return (this->type);
}
