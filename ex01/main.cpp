/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:10:55 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/15 16:00:30 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();LINE
    const Animal* j = new Dog();LINE
    const Animal* i = new Cat();LINE
    
    std::cout << j->getType() << " " << std::endl;LINE
    std::cout << i->getType() << " " << std::endl;LINE
    i->makeSound(); LINE //will output the cat sound!
    j->makeSound(); LINE
    meta->makeSound(); LINE
    
    delete i; LINE
    delete j; LINE
    delete meta; LINE

    const WrongAnimal* b = new WrongAnimal();LINE
    const WrongAnimal* c = new WrongCat();LINE
    
    std::cout << c->getType() << " " << std::endl;LINE
    c->makeSound(); LINE //will output the cat sound!
    b->makeSound(); LINE
    
    delete c; LINE
    delete b; LINE

    
    
    return 0;
}