/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:29:02 by zkaroune          #+#    #+#             */
/*   Updated: 2025/03/27 15:29:04 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"
#include <list>
#include <deque>

int main()
{
    std::vector<int> vect;    
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
    vect.push_back(40);
    

 try
 {
    std::cout <<"Yoo I Find it --> : " << *easyfind(vect , 40) << std::endl ;
 }
 catch(NotFound& e)
 {
    std::cerr << e.what() << std::endl;
 }
std::cout << "--------------------------------------------------------------" <<std::endl;

 std::list<int>  lista;  
lista.push_back(10);
lista.push_back(20);
lista.push_back(30);
lista.push_back(40);

try
{
   std::cout <<"Yoo I Find it --> : " << *easyfind(lista , 22) << std::endl ;
}
catch(NotFound& e)
{
   std::cerr << e.what() << std::endl;
}

std::cout << "--------------------------------------------------------------" <<std::endl;

std::deque<int>  deq;  
deq.push_back(10);
deq.push_back(5);
deq.push_back(3);
deq.push_back(1);

try
{
   std::cout <<"Yoo I Find it --> : " << *easyfind(deq , 1) << std::endl ;
}
catch(NotFound& e)
{
   std::cerr << e.what() << std::endl;
}
 return 0;
 
}
