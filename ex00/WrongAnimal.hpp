/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:42:37 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/15 16:01:16 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP


# define RED "\033[1;91m"
# define GREEN "\033[1;92m"
# define YELLOW "\033[1;93m"
# define CYAN "\033[1;96m"
# define RESET "\033[0m"

# include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();                                   // default constructor
        WrongAnimal(const WrongAnimal& instance);             // copy constructor
        WrongAnimal& operator=(const WrongAnimal& instance);  // copy assign operator    
        ~WrongAnimal();                          // destructor

        void        makeSound() const;
        std::string getType() const; 
};

# endif