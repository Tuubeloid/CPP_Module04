/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 09:44:16 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/29 21:05:40 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain {
protected:
    std::string ideas[100]; // Array of 100 strings representing ideas

public:
    Brain();  // Constructor
    Brain(const Brain& other); // Copy constructor
    Brain& operator=(const Brain& other); // Assignment operator
    ~Brain(); // Destructor

    void setIdea(unsigned int index, std::string idea);
    std::string getIdea(unsigned int index) const;
};

#endif