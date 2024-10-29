/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:56:31 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/29 20:41:50 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const unsigned int  i = 8;
    const Animal* animals[i];
    unsigned int j = 0;

    for (j = 0; j < i; j++) {
        if (j % 2 == 0) {
            animals[j] = new Dog();
        } else {
            animals[j] = new Cat();
        }
    }

    for (j = 0; j < i; j++) {
        animals[j]->makeSound();
    }

    for (j = 0; j < i; j++) {
        delete animals[j];
    }

    return 0;
}