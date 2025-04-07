//
// Created by Eliam on 17/02/2025.
//

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>


class Animal {
protected:
  std::string type;

public:
  // ─────────────────────────────────── Constructor ───────────────────────────────────
  Animal();

  Animal(std::string type);

  Animal(const Animal &copy);

  Animal &operator=(const Animal &copy);

  // ─────────────────────────────────── Destructor ────────────────────────────────────
  virtual ~Animal();

  // ───────────────────────────────────── Methods ─────────────────────────────────────
  virtual void makeSound(void) const = 0; // Pure virtual function

  std::string getType(void) const;
};

#endif //ANIMAL_HPP
