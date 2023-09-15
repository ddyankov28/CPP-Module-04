/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:37:25 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/15 17:05:06 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* dogBrain;
    public:
        Dog();                               // default constructor
        Dog(const Dog& instance);            // copy constructor
        Dog& operator=(const Dog& instance); // copy assign operator
        ~Dog();                              // destructor

        void        makeSound() const; 
};

# endif