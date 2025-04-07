//
// Created by Eliam on 18/02/2025.
//

#include "../includes/Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "🐕 Dog >>> 🔨 Default constructor called." << std::endl;
}

Dog::Dog(std::string type) {
	(void) type;
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "🐕 Dog >>> 🔨Constructor with arg called." << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	this->brain = new Brain(*copy.brain);
	std::cout << "🐕 Dog >>> 🔨Copy constructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &copy) {
	if (this != &copy) {
		Animal::operator=(copy);
		delete this->brain;
		this->brain = new Brain(*copy.brain);
	}
	std::cout << "🐕 Dog >>> 🔨Assignment constructor called." << std::endl;
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "🐕 Dog >>> Wouaf" << std::endl;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "🐕 Dog >>> 🪓 Destructor called." << std::endl;
}

std::string Dog::get_idea(const int n) const {
	return (this->brain->get_ideas()[n]);
}

void Dog::set_idea(int n, std::string idea) {
	this->brain->get_ideas()[n] = idea;
}
