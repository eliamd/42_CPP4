//
// Created by Eliam on 18/02/2025.
//

#include "../includes/Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "🐕 Dog >>> 🔨 Default constructor called." << std::endl;
}

Dog::Dog(std::string type) {
	(void)type;
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "🐕 Dog >>> 🔨Constructor with arg called." << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy), brain(copy.brain)
{
	std::cout << "🐕 Dog >>> 🔨Copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog &copy)
{
	this->type = copy.type;
	this->type = "Dog";
	this->brain = copy.brain;
	std::cout << "🐕 Dog >>> 🔨Assignment constructor called." << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "🐕 Dog >>> 🪓 Destructor called." << std::endl;
}

std::string Dog::get_idea(const int n) const {
	return (this->brain->get_ideas()[n]);
}
