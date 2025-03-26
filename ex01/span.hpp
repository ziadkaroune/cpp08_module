#include  <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <iterator>
#ifndef SPAN_HPP
#   define  SPAN_HPP
class   Span
{
    private:
            unsigned int        _size;
            std::vector<int>        _vec;
            int _track;
    public:
        Span(unsigned int size);
        Span(const Span &copy);
        Span& operator=(const Span &copy);
        ~Span();
        void addNumber(int  num); // add number and check if it's full and throw an exception
        void addNumber(std::vector<int>::iterator debut , std::vector<int>::iterator  fin);
        int shortestSpan(); //shortest distance from the min number to max number stores in span
        int longestSpan(); //shortest distance from the min number to max number stores in span
        void showSpan(void);
        class Nospace : public std::exception
        {
                public:
                        virtual const char *what() const throw();
        };
        class  Notenough: public std::exception
        {
                public:
                        virtual const char *what() const throw();
        };
};

#endif