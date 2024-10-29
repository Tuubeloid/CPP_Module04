/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:53:31 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/29 19:50:53 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    WrongCat(std::string type);  // Constructor with type
    WrongCat(const WrongCat& other);  // Copy Constructor
    WrongCat &operator=(const WrongCat &other);  // Assignment Operator
    ~WrongCat();

    void makeSound() const;  // Not virtual, so WrongAnimal's makeSound will be called
};

#endif