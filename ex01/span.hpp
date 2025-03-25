#include  <iostream>

#ifndef SPAN_HPP
#   define  SPAN_HPP
class   Span
{
    private:
            unsigned int _size;
            int _track;
    public:
        Span(unsigned int size);
        Span(const Span &copy);
        Span& operator=(const Span &copy);
        ~Span();
        void addNumber(int  num); // add number and check if it's full and throw an exception
        int shortestSpan(); //shortest distance from the min number to max number stores in span
        int longestSpan(); //shortest distance from the min number to max number stores in span

};

#endif