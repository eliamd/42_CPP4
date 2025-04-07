//
// Created by Eliam on 07/04/2025.
//

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << "WrongCat >>> 🔨 Default constructor called." << std::endl;
}

WrongCat::WrongCat(std::string type) {
	(void) type;
	this->type = "WrongCat";
	std::cout << "WrongCat >>> 🔨Constructor with arg called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy) {
	std::cout << "WrongCat >>> 🔨Copy constructor called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy) {
	this->type = copy.type;
	this->type = "WrongCat";

	std::cout << "WrongCat >>> 🔨Assignment constructor called." << std::endl;
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "WrongCat >>> 🐱 Meow!" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat >>> 🪓 Destructor called." << std::endl;
}
