/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:38:09 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/29 20:41:21 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called!" << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << "Brain copy constructor called!" << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& other) {
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			ideas[i] = other.ideas[i];
		}
	}
	std::cout << "Brain assignment operator called!" << std::endl;
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain destructor called!" << std::endl;
}

void Brain::setIdea(unsigned int index, std::string idea) {
	if (index >= 100) {
		std::cout << "Index outside of consciousness!" << std::endl;
		return;
	}
	ideas[index] = idea;
}

std::string Brain::getIdea(unsigned int index) const {
	if (index >= 100) {
		std::cout << "Index outside of consciousness!" << std::endl;
		return "";
	}
	return ideas[index];
}