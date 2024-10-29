/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:56:23 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/29 19:42:06 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << type << "WrongCat constructor called!" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
  std::cout << type << "Wrongcat type constructor called\n";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
  std::cout << type << "copy constructor called\n";
  type = other.type;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    if (this != &other) {
        type = other.type;
    }
    std::cout << "Copy assignment operator called!" << std::endl;
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << type << "destructor called!" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "Wrong Meow?" << std::endl;  // Not actually called polymorphically
}