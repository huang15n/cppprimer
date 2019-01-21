#include<iostream>

/**

author : Eddie Huang
Version alpha1 

g++ -std=c++17 /Users/eddiehuang/Desktop/cppprimer/uninitializedp44.cpp -Wall -Wextra -Werror 


**/

std:: string global_unit_string;
int gloal_unit;

int main(){

std :: cout << "the global_unit_string = " << std:: endl;
std :: cout << "gloal_unit = " << gloal_unit <<std :: endl;


std:: string empty_string;
std :: cout << "the empty string is unitialized as :" << empty_string << std::endl;




// Eddies-MacBook-Pro-2:chapter2_datatypes eddiehuang$ ./a.out
//the empty string is unitialized as :


/**

/Users/eddiehuang/Desktop/cppprimer/uninitializedp44.cpp:19:15: note: 
      initialize the variable 'value_unit' to silence this warning
int value_unit;
              ^
               = 0
2 errors generated.

**/
//int value_unit;
//int another_unit = value_unit;


return 0;
}
