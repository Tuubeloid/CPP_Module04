/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:34:17 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/06 18:03:19 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() : type("Animal") {
    std::cout << "Abstract Animal constructor called!" << std::endl;
}

AAnimal::~AAnimal() {
    std::cout << "Abstract Animal destructor called!" << std::endl;
}

std::string AAnimal::getType() const {
    return type;
}

void AAnimal::makeSound() const {
    std::cout << "Abstract Animal makes a sound!" << std::endl;
}