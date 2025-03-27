#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
#include <list>
#include <iostream>
#include <algorithm>
#include <stack>
#include <deque>
#include <iterator>
template <typename T>
class MutantStack : public std::stack<T>
{
private:
 
public:
    MutantStack();                                
    MutantStack(const MutantStack &copy);         
    MutantStack &operator=(const MutantStack &other);  
    ~MutantStack(); 

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin() ;
    iterator end() ;
};


template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &copy)
{
    *this = copy;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other)
{
    return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return std::stack<T>::c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
    return std::stack<T>::c.end();
}

#endif
