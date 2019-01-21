#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	double object = 3.1415;
	double *pointer = &object;
	void * void_pointer = &object;

	std :: cout << pointer << std :: endl;

	std :: cout << void_pointer << std::endl;

 

return 0;
}
