/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:53:09 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/29 19:44:22 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal") {
  std::cout << type << " constructor called\n";
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {
  std::cout << type << " constructor called\n";
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
  std::cout << "WrongAnimal [" << type << "] copy constructor called\n";
  type = other.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "WrongAnimal assignment operator called!" << std::endl;
    return *this;
}

void WrongAnimal::setType(std::string &type) {
    this->type = type;
}

std::string WrongAnimal::getType() const {
    return type;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal makes a wrong sound!" << std::endl;
}