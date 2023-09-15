/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:49:13 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/15 12:28:27 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{ std::cout << GREEN << "Animal Default constuctor called" << RESET << std::endl; }

Animal::Animal(const Animal& instance)
{
    *this = instance;
    std::cout << YELLOW << "Animal Copy constructor called" << RESET << std::endl;
}

Animal& Animal::operator=(const Animal& instance)
{
    _type = instance._type;
    std::cout << CYAN << "Animal Copy assignment operator called" << RESET <<  std::endl;
    return *this;
}

Animal::~Animal()
{ std::cout << RED << "Animal Destructor called" << RESET << std::endl; }

void    Animal::makeSound() const
{
    std::cout << "🔊🔊🔊 Default Animal Sound 🔊🔊🔊" << std::endl; 
}

std::string Animal::getType() const
{
    return _type;
}