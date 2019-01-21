#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){


const int *pointer_const = nullptr;
constexpr int *pointer_constexpr = nullptr;


constexpr int *pointer_conster_null = nullptr; // pointer_const_null is a constant poointer to int 
int value = 0;
constexpr int another_value = 100;  // the type of another_value is a const int 
// i and j must be defined outside any funciton 

constexpr const int *pointer_int = &another_value;  // pointer_int is a constant pointer to the const int i 
constexpr int *pointer = &value; // pointer is another pointer to int value

 

return 0;
}
