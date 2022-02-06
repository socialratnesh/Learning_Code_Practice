/*************
  This example demonstrate about template instantiation and explicit template instantiation.

  For more info visit:
  Back to Basics: Compiling and Linking - Ben Saks - CppCon 2021
https://www.youtube.com/watch?v=cpkDQaYttR4&list=PLHTh1InhhwT4TJaHBVWzvBOYhp27UO7mI&index=7

 **************/


#include "header.hpp"
#include <string>
#include <iostream>



// explicit specilization definition 
int S<int>::fun(int t) {
	return t+1;
}

// explicit class instantiation definition
template
struct Ct<double>;	// no need for body

// explicit function instantiation definition
// this ensures that code for int type is generated always
template
void mySwap(int & left, int & right);   // no need for body it will come from template function instantiation


void swapString() {

	std::string str1 = "Modern";
	std::string str2 = "C++";

	std::clog << "Before swap: \n" << str1 << ' ' << str2 << '\n';
	mySwap(str1, str2);
	std::clog << "After swap: \n" << str1 << ' ' << str2 << '\n';

	return ;

}


/******
  END OF FILE
 ******/
