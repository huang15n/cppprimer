#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){
	int value = 200;

	int *pointer = &value;

	std::cout << "the value that the pointer points to is " << *pointer << std::endl;

	std::cout << "the value that the address points to is " << pointer << std::endl;

	std::cout << "the value that the address points to is " << &value << std::endl;

 

return 0;
}
