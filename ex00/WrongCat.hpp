/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:46:26 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/15 12:47:01 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();                               // default constructor
        WrongCat(const WrongCat& instance);            // copy constructor
        WrongCat& operator=(const WrongCat& instance); // copy assign operator
        ~WrongCat();                              // destructor

        void        makeSound() const;
};

# endif