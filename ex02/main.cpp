/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:56:31 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/29 22:30:42 by tvalimak         ###   ########.fr       */
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

    unsigned int index = 0;

    Dog *dog = new Dog();
    Cat *cat = new Cat();

    dog->setIdeas("Dog idea", index);
    cat->setIdeas("Cat idea", index);

    std::cout << dog->getType() << " idea: at index" << index << ", " << dog->getIdea(index) << std::endl;
    std::cout << cat->getType() << " idea: at index" << index << ", " << cat->getIdea(index) << std::endl;

    index = 63;

    dog->setIdeas("Dog idea 63", index);
    cat->setIdeas("Cat idea 63", index);

    std::cout << dog->getType() << " idea: at index" << index << ", " << dog->getIdea(index) << std::endl;
    std::cout << cat->getType() << " idea: at index" << index << ", " << cat->getIdea(index) << std::endl;

    Dog *dog2 = new Dog(*dog);
    Dog *dog3 = new Dog();
    *dog3 = *dog2;

    Cat *cat2 = new Cat(*cat);
    Cat *cat3 = new Cat();
    *cat3 = *cat2;

    //Animal *animal = new Animal();
    //animal->makeSound();

    delete dog;
    delete cat;
    delete dog2;
    delete dog3;
    delete cat2;
    delete cat3;
    return 0;

    return 0;
}