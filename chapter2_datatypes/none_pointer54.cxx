#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	int *pointer1 = nullptr; // this is equivalent to pointer1 = 0
	int *pointer2 = 0; // direct assigns pointer to 0
	int *pointer3 = NULL; // this is equivalent to pointer3 = 0


	int *pointer4; // uninitialized pointer 
	int value = 0;
	pointer4 = value; // this is illegal 
	/**
	error: assigning
      to 'int *' from incompatible type 'int'; take the address with &
        pointer4 = value; // this is illegal 



	**/

 

return 0;
}
