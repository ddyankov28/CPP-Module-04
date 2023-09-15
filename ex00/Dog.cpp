/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:43:37 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/15 12:14:12 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << GREEN << "Dog Default constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog& instance)
{
    *this = instance;
    std::cout << YELLOW << "Dog Copy constructor called" << RESET << std::endl;
}

Dog&    Dog::operator=(const Dog& instance)
{
    _type = instance._type;
    std::cout << CYAN << "Dog Copy assignment operator called" << RESET <<  std::endl;
    return *this;
}

Dog::~Dog()
{ std::cout << RED << "Dog Destructor called" << RESET << std::endl; }

void    Dog::makeSound() const
{
    std::cout << "🐶🐶🐶 WUFF..WUFF 🐶🐶🐶" << std::endl;
}