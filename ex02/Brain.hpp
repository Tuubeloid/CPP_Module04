/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 09:44:16 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/04 09:44:21 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
private:
    std::string ideas[100]; // Array of 100 strings representing ideas

public:
    Brain();  // Constructor
    Brain(const Brain& other); // Copy constructor
    Brain& operator=(const Brain& other); // Assignment operator
    ~Brain(); // Destructor

    void setIdea(int index, const std::string& idea);
    std::string getIdea(int index) const;
};

#endif