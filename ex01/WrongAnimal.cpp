/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:44:12 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/15 12:45:08 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{ std::cout << GREEN << "WrongAnimal Default constuctor called" << RESET << std::endl; }

WrongAnimal::WrongAnimal(const WrongAnimal& instance)
{
    *this = instance;
    std::cout << YELLOW << "WrongAnimal Copy constructor called" << RESET << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& instance)
{
    _type = instance._type;
    std::cout << CYAN << "WrongAnimal Copy assignment operator called" << RESET <<  std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal()
{ std::cout << RED << "WrongAnimal Destructor called" << RESET << std::endl; }

void    WrongAnimal::makeSound() const
{
    std::cout << "🔊🔊🔊 Default WrongAnimal Sound 🔊🔊🔊" << std::endl; 
}

std::string WrongAnimal::getType() const
{
    return _type;
}