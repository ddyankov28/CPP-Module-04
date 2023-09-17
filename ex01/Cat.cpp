/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:06:22 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/17 16:10:23 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    _catBrain = new Brain();
    std::cout << GREEN << "Cat Default constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat& instance)
{
    *this = instance;
    std::cout << YELLOW << "Cat Copy constructor called" << RESET << std::endl;
}

Cat&    Cat::operator=(const Cat& instance)
{
    _type = instance._type;
    std::cout << CYAN << "Cat Copy assignment operator called" << RESET <<  std::endl;
    return *this;
}

Cat::~Cat()
{
    delete _catBrain; 
    std::cout << RED << "Cat Destructor called" << RESET << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "🐱🐱🐱 MIAUW..MIAUW 🐱🐱🐱" << std::endl;
}