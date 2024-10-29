/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:50:12 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/29 20:09:55 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal{
private:
    Brain* brain;

public:
    Dog(); // Default constructor   
    Dog(std::string type); // Constructor with type
    Dog(const Dog& other); // Copy constructor
    Dog& operator=(const Dog& other); // Assignment operator
    ~Dog(); // destructor

    void setIdeas(std::string idea, unsigned int index);
    std::string getIdea(unsigned int index) const;

    void makeSound() const;
};

#endif