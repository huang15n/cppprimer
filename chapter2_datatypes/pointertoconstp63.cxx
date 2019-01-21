#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	const double value = 3.1415;

	/***

	double *pointer = &value;
	Eddies-MacBook-Pro-2:chapter2_datatypes eddiehuang$ g++ -std=c++17 /Users/eddiehuang/Desktop/cppprimer/pointertoconstp63.cxx
/Users/eddiehuang/Desktop/cppprimer/pointertoconstp63.cxx:15:10: error: cannot
      initialize a variable of type 'double *' with an rvalue of type
      'const double *'
        double *pointer = &value;
                ^         ~~~~~~
1 error generated.


	**/

	
	const double *pointer_cont = &value;

   /**

	*pointer_cont = 100;

	Eddies-MacBook-Pro-2:chapter2_datatypes eddiehuang$ g++ -std=c++17 /Users/eddiehuang/Desktop/cppprimer/pointertoconstp63.cxx
/Users/eddiehuang/Desktop/cppprimer/pointertoconstp63.cxx:33:16: error: 
      read-only variable is not assignable
        *pointer_cont = 100;
        ~~~~~~~~~~~~~ ^
1 error generated.

**/

 

return 0;
}
