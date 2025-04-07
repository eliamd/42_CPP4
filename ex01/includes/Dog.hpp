//
// Created by Eliam on 18/02/2025.
//

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>

#include "Brain.hpp"


class Dog : public Animal {
private:
	Brain *brain;

public:
	// ─────────────────────────────────── Constructor ───────────────────────────────────
	Dog();

	Dog(std::string type);

	Dog(const Dog &copy);

	Dog &operator=(const Dog &copy);

	~Dog();

	// ───────────────────────────────────── Methods ─────────────────────────────────────
	virtual void makeSound() const; // Override
	std::string get_idea(int n) const;

	void set_idea(int n, std::string idea);
};


#endif //DOG_HPP
