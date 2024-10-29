/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:50:33 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/29 20:35:45 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog constructor called!" << std::endl;
}

Dog::Dog(std::string type) {
    this->type = type;
    brain = new Brain();
    std::cout << "Dog type constructor called!" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    this->type = other.type;
    brain = new Brain(*other.brain);
    std::cout << "Dog copy constructor called!" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);  // Call base class assignment
        this->type = other.type;
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    std::cout << "Dog copy assignment operator called!" << std::endl;
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor called!" << std::endl;
}

void Dog::setIdeas(std::string idea, unsigned int index) {
    if (index >= 100) {
        std::cout << "Index outside of consciousness!" << std::endl;
        return;
    }
    brain->setIdea(index, idea);
}

std::string Dog::getIdea(unsigned int index) const {
    if (index >= 100) {
        std::cout << "Index outside of consciousness!" << std::endl;
        return "";
    }
    std::cout << "Dog idea: " << brain->getIdea(index) << std::endl;
    return "";
}

void Dog::makeSound() const {
    std::cout << "Woof Woof!" << std::endl;
}