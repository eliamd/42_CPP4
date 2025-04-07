//
// Created by Eliam on 18/02/2025.
//

#include "../includes/Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "🐈 Cat >>> 🔨 Default constructor called." << std::endl;
}

Cat::Cat(std::string type) {
	(void) type;
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "🐈 Cat >>> 🔨Constructor with arg called." << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy) {
	this->brain = new Brain(*copy.brain);
	std::cout << "🐈 Cat >>> 🔨Copy constructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &copy) {
	if (this != &copy) {
		Animal::operator=(copy);
		delete this->brain;
		this->brain = new Brain(*copy.brain);
	}
	std::cout << "🐈 Cat >>> 🔨Assignment constructor called." << std::endl;
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "🐈 Cat >>> Miaou" << std::endl;
}

Cat::~Cat() {
	delete this->brain;
	std::cout << "🐈 Cat >>> 🪓 Destructor called." << std::endl;
}

std::string Cat::get_idea(const int n) const {
	return (this->brain->get_ideas()[n]);
}

void Cat::set_idea(int n, std::string idea) {
	this->brain->get_ideas()[n] = idea;
}
