/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:51:32 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/29 20:36:01 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat constructor called!" << std::endl;
}

Cat::Cat(std::string type) {
    this->type = type;
    brain = new Brain();
    std::cout << "Cat type constructor called!" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    this->type = other.type;
    brain = new Brain(*other.brain);
    std::cout << "Cat copy constructor called!" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);  // Call base class assignment
        this->type = other.type;
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    std::cout << "Cat assignment operator called!" << std::endl;
    return *this;
}

Cat::~Cat() {
    std::cout << "Cat destructor called!" << std::endl;
}

void Cat::setIdeas(std::string idea, unsigned int index) {
    if (index >= 100) {
        std::cout << "Index outside of consciousness!" << std::endl;
        return;
    }
    brain->setIdea(index, idea);
}

std::string Cat::getIdea(unsigned int index) const {
    if (index >= 100) {
        std::cout << "Index outside of consciousness!" << std::endl;
        return "";
    }
    std::cout << "Cat's idea: " << brain->getIdea(index) << std::endl;
    return "";
}

void Cat::makeSound() const {
    std::cout << "Meow Meow!" << std::endl;
}