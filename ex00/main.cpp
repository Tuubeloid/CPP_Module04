/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:56:31 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/04 08:56:37 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    // Polymorphic behavior
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "Dog type: " << dog->getType() << std::endl;
    std::cout << "Cat type: " << cat->getType() << std::endl;
    cat->makeSound();  // Outputs: Meow Meow!
    dog->makeSound();  // Outputs: Woof Woof!
    meta->makeSound(); // Outputs: Animal makes a sound!

    delete meta;
    delete dog;
    delete cat;

    // Non-polymorphic behavior
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "WrongCat type: " << wrongCat->getType() << std::endl;
    wrongCat->makeSound();  // Outputs: WrongAnimal makes a wrong sound!
    wrongMeta->makeSound(); // Outputs: WrongAnimal makes a wrong sound!

    delete wrongMeta;
    delete wrongCat;

    return 0;
}