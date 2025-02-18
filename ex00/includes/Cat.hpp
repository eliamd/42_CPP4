//
// Created by Eliam on 18/02/2025.
//

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <string>
#include <iostream>


class Cat : public Animal
{
	private:
	public:
	// ─────────────────────────────────── Constructor ───────────────────────────────────
	Cat();
	Cat(std::string type);
	Cat(const Cat &copy);
	Cat &operator=(const Cat &copy);
	// ─────────────────────────────────── Destructor ────────────────────────────────────
	~Cat();
	// ───────────────────────────────────── Methods ─────────────────────────────────────
};



#endif //CAT_HPP
