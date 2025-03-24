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