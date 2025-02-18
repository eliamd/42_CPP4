//
// Created by Eliam on 18/02/2025.
//

#include "../includes/Brain.hpp"

Brain::Brain()
{
	this->ideas[0] = "Manger";
	this->ideas[1] = "Dormir";
	this->ideas[2] = "Manger";

	std::cout << "Brain >>> 🧠 Default constructor called." << std::endl;
}

Brain::Brain(std::string ideas[100])
{
	int i = 0;
	while (i < 100)
	{
		this->ideas[i] = ideas[i];
		i++;
	}

	std::cout << "Brain >>> 🧠Constructor with arg called." << std::endl;
}

Brain::Brain(Brain const &copy)
{
    for (int i = 0; i < 100; ++i)
    {
        this->ideas[i] = copy.ideas[i];
    }
    std::cout << "Brain >>> 🧠 Copy constructor called." << std::endl;
}

Brain Brain::operator=(Brain const &copy)
{
	for (int i = 0; i < 100; ++i)
	{
		this->ideas[i] = copy.ideas[i];
	}

	std::cout << "Brain >>> 🧠 Assignment constructor called." << std::endl;
	return (*this);
}

void Brain::set_ideas(std::string ideas[100])
{
	for (int i = 0; i < 100; ++i)
	{
		this->ideas[i] = ideas[i];
	}
}

Brain::~Brain()
{
	std::cout << "Brain >>> 🧠🪓 Destructor called." << std::endl;
}

std::string * Brain::get_ideas()
{
	return (this->ideas);
}
