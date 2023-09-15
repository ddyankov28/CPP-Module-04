/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:11:06 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/15 12:50:30 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP


# define RED "\033[1;91m"
# define GREEN "\033[1;92m"
# define YELLOW "\033[1;93m"
# define CYAN "\033[1;96m"
# define RESET "\033[0m"
# define LINE  std::cout << "-------------------------" << std::endl;

# include <iostream>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();                                   // default constructor
        Animal(const Animal& instance);             // copy constructor
        Animal& operator=(const Animal& instance);  // copy assign operator    
        virtual~Animal();                          // destructor

        virtual void        makeSound() const;
        std::string getType() const; 
};

# endif