#include "span.hpp"


int main()
{
 
   Span sp = Span(120);
    try{
     
      
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
         sp.showSpan();
        std::cout << "sortest distance :" << sp.shortestSpan() << std::endl;
        std::cout << "longest distance :" << sp.longestSpan() << std::endl;
    }
    catch(Span::Nospace &e)
    {
        std::cerr <<  e.what()  << std::endl;
    } 
    catch(Span::Notenough &e)
    {
        std::cerr <<  e.what()  << std::endl;
    } 
  
 
/*
Span spa = Span(5);
std::vector<int> vec;

    for (int i = 0; i < 2; i++)
	{
		
		
		vec.push_back(abs(i  * rand() % 100));
	}

    try
    {
        spa.addNumber(vec.begin() , vec.end());
        spa.showSpan();
        std::cout << spa.shortestSpan() << std::endl;
        std::cout << spa.longestSpan() << std::endl;
    }
    catch(Span::Nospace &e)
    {
        std::cerr <<  e.what()  << std::endl;
    } 
    catch(Span::Notenough &e)
    {
        std::cerr <<  e.what()  << std::endl;
    } 
  
  */  
    return 0;
}