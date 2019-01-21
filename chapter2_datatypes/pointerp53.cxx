#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	int *pointer_integer1, *pointer_integer2; // those pointers do not need to be initialized 
	double variable, pointer_double;

	int value = 100;
	int *pointer_to_value = &value; // this is a pointer to the value with type integer

	double double_value;
	double *pointer_to_double_value = &double_value; // this pointer points to double value address 
	double *pointer_to_type_double = double_value; // this pointer points to the data type !! double 

	int *pointer_to_integer = *pointer_to_double_value; // wrong, type differ 
	pointer_to_integer = &double_value; // assign the double address to an integer pointer 




 

return 0;
}
