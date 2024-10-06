/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:51:32 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/04 08:51:39 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat constructor called!" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called!" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow Meow!" << std::endl;
}