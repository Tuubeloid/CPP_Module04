/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:52:54 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/06 19:44:24 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
protected:
    std::string type;

public:
    WrongAnimal(); // Constructor
    WrongAnimal(const WrongAnimal& other);  // Copy Constructor
    WrongAnimal& operator=(const WrongAnimal& other);  // Assignment Operator
    ~WrongAnimal(); // Destructor

    std::string getType() const;
    void makeSound() const;  // Not virtual
};

#endif