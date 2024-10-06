/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:50:12 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/06 19:02:12 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();  // Constructor
    Dog(const Dog& other);  // Copy Constructor
    Dog& operator=(const Dog& other);  // Assignment Operator
    virtual ~Dog();  // Destructor

    virtual void makeSound() const;  // Override makeSound function
};

#endif