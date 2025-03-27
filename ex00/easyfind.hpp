/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:28:55 by zkaroune          #+#    #+#             */
/*   Updated: 2025/03/27 15:28:57 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#   define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>


class NotFound : public std::exception
{
    public:
        virtual const char *what() const throw()
        {
                return ("element not found");    
        }
};

template <typename T>

typename T::iterator easyfind(T& container , int num)
{
    typename T::iterator itr = std::find(container.begin() , container.end() , num);
    if(itr == container.end())  // the iterator reach  the end of the  container it means no elememnt found
        throw NotFound();
    else
        return itr;
}
 

#endif
