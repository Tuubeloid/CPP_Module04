/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:56:31 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/04 09:46:09 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* animals[10];

    // Fill half with Dog and the other half with Cat
    for (int i = 0; i < 5; ++i) {
        animals[i] = new Dog();
    }
    for (int i = 5; i < 10; ++i) {
        animals[i] = new Cat();
    }

    // Deleting the animals
    for (int i = 0; i < 10; ++i) {
        delete animals[i]; // Calls the appropriate destructor
    }

    return 0;
}