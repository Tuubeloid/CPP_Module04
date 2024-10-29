/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:34:20 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/29 18:51:26 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
protected:
    std::string type;

public:
    Animal();  // Constructor'
    Animal(std::string type);  // Constructor with type
    Animal(const Animal& other);  // Copy Constructor
    Animal& operator=(const Animal& other);  // Assignment Operator
    virtual ~Animal();  // Virtual Destructor

    void setType(std::string type);  // Setter for type
    std::string getType() const;  // Getter for type
    virtual void makeSound() const;  // Virtual function for polymorphism
};

#endif