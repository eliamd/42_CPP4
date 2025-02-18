//
// Created by Eliam on 18/02/2025.
//

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>



class Brain {
private:
	std::string ideas[100];
public:
 // ─────────────────────────────────── Constructor ────────────────────────────────────
	Brain();
	Brain(std::string ideas[100]);
	Brain(Brain const &copy);
	Brain operator=(Brain const &copy);
 // ──────────────────────────────────── Destructor ────────────────────────────────────
	~Brain();
 // ───────────────────────────────────── Methods ──────────────────────────────────────
	std::string * get_ideas();
	void set_ideas(std::string ideas[100]);
};

#endif //BRAIN_HPP
