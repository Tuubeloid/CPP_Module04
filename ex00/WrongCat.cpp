/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:56:23 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/06 19:54:55 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    type = "WrongCat";
    std::cout << "WrongCat constructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
  std::cout << type << "WrongCat copy constructor called\n";
  type = other.type;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    if (this != &other) {
        WrongCat::operator=(other);  // Call base class assignment
        type = other.type;
    }
    std::cout << "Dog assignment operator called!" << std::endl;
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called!" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "Wrong Meow?" << std::endl;  // Not actually called polymorphically
}