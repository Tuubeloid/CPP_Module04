/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:51:32 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/06 19:43:09 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat constructor called!" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Cat copy constructor called!" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);  // Call base class assignment
        type = other.type;
    }
    std::cout << "Cat assignment operator called!" << std::endl;
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor called!" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow Meow!" << std::endl;
}