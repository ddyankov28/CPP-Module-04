/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:05:39 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/17 16:06:10 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain*  _catBrain;
    public:
        Cat();                               // default constructor
        Cat(const Cat& instance);            // copy constructor
        Cat& operator=(const Cat& instance); // copy assign operator
        ~Cat();                              // destructor

        void        makeSound() const;
};

# endif