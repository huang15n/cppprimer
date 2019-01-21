#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

int value = 10;
int *pointer;
int *&reference = pointer; //reference to the pointer p 
reference = &value;
*reference = 0;



return 0;
}
