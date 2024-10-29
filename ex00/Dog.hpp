/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:50:12 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/29 18:52:49 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();  // Constructor
    Dog(std::string type);  // Constructor with type
    Dog(const Dog& other);  // Copy Constructor
    Dog& operator=(const Dog& other);  // Assignment Operator
    virtual ~Dog();  // Destructor

    void makeSound() const;  // Override makeSound function
};

#endif