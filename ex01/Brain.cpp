/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:45:44 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/17 16:26:43 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"
# include <sstream>

Brain::Brain()
{
    std::stringstream ss;
    for (int i = 0; i < 100; i++)
    {
        ss << "Idea number" << i; 
        _ideas[i] = ss.str();
    }
    std::cout << GREEN << "Brain Default constuctor called" << RESET << std::endl;
}

Brain::Brain(const Brain& instance)
{
    *this = instance;
    std::cout << YELLOW << "Brain Copy constructor called" << RESET << std::endl;
}

Brain&  Brain::operator=(const Brain& instance)
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = instance._ideas[i];
    std::cout << CYAN << "Brain Copy assignment operator called" << RESET <<  std::endl;
    return *this;
}

Brain::~Brain()
{ std::cout << RED << "Brain Destructor called" << RESET << std::endl; }
