/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:47:22 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/15 12:47:43 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << GREEN << "WrongCat Default constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& instance)
{
    *this = instance;
    std::cout << YELLOW << "WrongCat Copy constructor called" << RESET << std::endl;
}

WrongCat&    WrongCat::operator=(const WrongCat& instance)
{
    _type = instance._type;
    std::cout << CYAN << "WrongCat Copy assignment operator called" << RESET <<  std::endl;
    return *this;
}

WrongCat::~WrongCat()
{ std::cout << RED << "WrongCat Destructor called" << RESET << std::endl; }

void    WrongCat::makeSound() const
{
    std::cout << "🐱🐱🐱 MIAUW..MIAUW 🐱🐱🐱" << std::endl;
}