/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:15:41 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/15 16:54:16 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class   Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain();                                  // default constructor
        Brain(const Brain& instance);             // copy constructor
        Brain&  operator=(const Brain& instance); // copy assign operator
        ~Brain();                                 // destructor
};

# endif