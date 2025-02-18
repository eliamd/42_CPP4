//
// Created by Eliam on 18/02/2025.
//

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>
#include <iostream>


class Cat : public Animal
{
	private:
	Brain* brain;
	
	public:
	// ─────────────────────────────────── Constructor ───────────────────────────────────
	Cat();
	Cat(std::string type);
	Cat(const Cat &copy);
	Cat &operator=(const Cat &copy);
	// ─────────────────────────────────── Destructor ────────────────────────────────────
	~Cat();
	// ───────────────────────────────────── Methods ─────────────────────────────────────
	std::string get_idea(int n) const;
};



#endif //CAT_HPP
