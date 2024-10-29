/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:51:20 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/29 20:12:53 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
private:
    Brain* brain;

public:
    Cat();  // Constructor
    Cat(std::string type);  // Constructor with type
    Cat(const Cat& other);  // Copy Constructor
    Cat& operator=(const Cat& other);  // Assignment Operator
    ~Cat();  // Destructor

    void setIdeas(std::string idea, unsigned int index);
    std::string getIdea(unsigned int index) const;

    void makeSound() const;  // Override makeSound function
};

#endif