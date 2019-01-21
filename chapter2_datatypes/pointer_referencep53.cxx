#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){


int value = 42;
int &reference = value; // this is a reference ,& reference followed by a declaration, reference is a reference 
int *pointer; // this is followed by declaration, similar to the reference, but pointer is a pointer 
pointer = &value; // & is used as the address of the pointer 
*pointer = value; // deference pointer to assign the value to the memory block that the pointer points to 
int &reference2 = *pointer; // & is the declaration of the reference, pointer is the deference pointer 
// int &reference3 = 100;

/***
/Users/eddiehuang/Desktop/cppprimer/pointer_referencep53.cxx:20:6: error: 
      non-const lvalue reference to type 'int' cannot bind to a temporary of
      type 'int'
***/
return 0;
}

