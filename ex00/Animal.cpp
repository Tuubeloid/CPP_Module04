/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:34:17 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/29 19:38:38 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
    std::cout << "Animal constructor called!" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "Animal copy constructor called!" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        this->type = other.type;
    }
    std::cout << "Animal assignment operator called!" << std::endl;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called!" << std::endl;
}

std::string Animal::getType() const {
    return type;
}

void Animal::makeSound() const {
    std::cout << "Animal makes a sound!" << std::endl;
}