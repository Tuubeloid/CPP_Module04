/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:51:20 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/06 19:42:00 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
    Cat();  // Constructor
    Cat(const Cat& other);  // Copy Constructor
    Cat& operator=(const Cat& other);  // Assignment Operator
    virtual ~Cat();  // Destructor

    virtual void makeSound() const;  // Override makeSound function
};

#endif