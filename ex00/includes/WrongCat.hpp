//
// Created by Eliam on 07/04/2025.
//

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <string>
#include <iostream>

class WrongCat : public WrongAnimal {
private:
public:
	// ─────────────────────────────────── Constructor ───────────────────────────────────
	WrongCat();

	WrongCat(std::string type);

	WrongCat(const WrongCat &copy);

	WrongCat &operator=(const WrongCat &copy);

	// ─────────────────────────────────── Destructor ────────────────────────────────────
	~WrongCat();

	// ───────────────────────────────────── Methods ─────────────────────────────────────
	void makeSound() const;

};

#endif //WRONGCAT_HPP
