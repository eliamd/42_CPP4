//
// Created by Eliam on 18/02/2025.
//

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>


class Dog : public Animal {
private:
public:
	// ─────────────────────────────────── Constructor ───────────────────────────────────
	Dog();

	Dog(std::string type);

	Dog(const Dog &copy);

	Dog &operator=(const Dog &copy);

	~Dog();

	// ───────────────────────────────────── Methods ─────────────────────────────────────
	void makeSound() const; // Override (Animal's method)
};


#endif //DOG_HPP
