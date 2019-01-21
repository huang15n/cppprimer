#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

int value = 1024;
int *pointer1 = &value; // this points to the int value 
int **pointer2 = &pointer1; // this points to an int

// std :: cout << **pointer1 << std :: endl;




std :: cout << *pointer1 << std :: endl;

std :: cout << **pointer2 << std :: endl;
 

return 0;
}
