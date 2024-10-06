/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:34:20 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/06 17:57:17 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
protected:
    std::string type;

public:
    AAnimal();  // Constructor
    virtual ~AAnimal();  // Virtual Destructor

    std::string getType() const;  // Getter for type
    virtual void makeSound() const=0;  // Virtual function for polymorphism
};

#endif