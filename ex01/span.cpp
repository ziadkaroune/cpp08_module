/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkaroune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 15:31:58 by zkaroune          #+#    #+#             */
/*   Updated: 2025/03/27 15:32:00 by zkaroune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int size) : _size(size) , _track(0)
{
        std::cout << "span's size ==  " <<  this->_size << std::endl;
}
Span::Span(const Span &copy)
{
    *this = copy;
}

Span &Span::operator=(const Span &copy)
{
    if(this != &copy)
    {
        _size  =  copy._size;
        _vec   = copy._vec;
    }
    return (*this);
}

const char *Span::Nospace::what() const throw(){
    return("you excede the limit");
}
const char *Span::Notenough::what() const throw()
{
    return("container is  empty or you do not have enough number to start");
}


void Span::addNumber(int num)    // by numbers
{
    if(this->_track < this->_size)
    {
       this->_vec.push_back(num);
       this->_track++;
    }
    else
        throw Nospace();
            
}

void Span::addNumber(std::vector<int>::iterator debut, std::vector<int>::iterator fin)
{
    int rangeSize = std::distance(debut, fin);  

    if (this->_track + rangeSize > this->_size)
        throw Nospace();  

    _vec.insert(_vec.end(), debut, fin);  
    this->_track += rangeSize;  
}


void  Span::showSpan(void)
{
    for(int i  = 0;  i < this->_vec.size()  ; i++)
    {
        std::cout << this->_vec[i]    << "  -> ";
    }
    std::cout << std::endl;
    return ;
}
int Span::shortestSpan()
{
    if(_vec.size() <= 1)
        throw Notenough();
    else
    {
        std::sort(_vec.begin()  ,  _vec.end());
        unsigned int min =_vec[1] - _vec[0];
        for(int i = 1  ; i < _vec.size()  ; i++)
        {
            if(_vec[i + 1] - _vec[i] <= min)
                min  = _vec[i + 1] - _vec[i];
        }
        return min;

    }
}
int Span::longestSpan(){
    if(_vec.size() <= 1)
        throw Notenough();
    else
    {
        // 1  - 5 - 100 - 101 - 102
        std::sort(_vec.begin()  ,  _vec.end());
        int vecSize  = _vec.size() - 1;
        unsigned int min =_vec[vecSize] - _vec[0];
        return min;
    }
}
Span::~Span()
{

}
