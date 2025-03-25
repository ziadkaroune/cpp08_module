#include "span.hpp"

Span::Span(unsigned int size) : _size(size) , _track(0)
{

}
const char
void Span::addNumber(int num)
{
    if(this->_track < this->_size)
    {
        storenumb(num);
        this->_track++;
    }
        
    else
            throw Nospace();
}

Span::~Span()
{

}