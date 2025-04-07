//
// Created by Eliam on 07/04/2025.
//

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal {
protected:
	std::string type;

public:
	// ─────────────────────────────────── Constructor ───────────────────────────────────
	WrongAnimal();

	WrongAnimal(std::string type);

	WrongAnimal(const WrongAnimal &copy);

	WrongAnimal &operator=(const WrongAnimal &copy);

	// ─────────────────────────────────── Destructor ────────────────────────────────────
	~WrongAnimal();

	// ───────────────────────────────────── Methods ─────────────────────────────────────
	void makeSound() const;

	std::string getType() const;
};

#endif //WRONGANIMAL_HPP
