#include<iostream>
#include<string>
#include<vector>
/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

char function(){
	return 'a';

}

int main(){

	int array_values[10];
	int *pointer = array_values;

	/**
	typeconversion.cxx:22:8: error: cannot initialize a variable of type 'char *'
      with an rvalue of type 'char'
        char *pointer_to_bool = function();
              ^                 ~~~~~~~~~~
1 error generated.

	char *pointer_to_bool = function();
	if(pointer_to_bool){ // true if pointer is not zer p
		std::cout << "this is a pointer to bool " << std::endl;
	}

	while( *pointer_to_bool){ // true if *pointer is not the null character 

	}

	**/

	int integer_value; // unitialized 
	const int &reference_constant = integer_value; // convert a non const to a reference to const int 
	const int *pointer_constant = &integer_value; // covert address of a non const to the address of a consant 


/**
	int &reference_non_constant = &reference_constant, *pointer_non_constant = pointer_constant; // conversion from const to nonconst not allowed 

typeconversion.cxx:21:7: error: non-const lvalue reference to type 'int' cannot
      bind to a temporary of type 'const int *'
        int &reference_non_constant = &reference_constant, *pointer_non_...
             ^                        ~~~~~~~~~~~~~~~~~~~
typeconversion.cxx:21:54: error: cannot initialize a variable of type 'int *'
      with an lvalue of type 'const int *'
  ...= &reference_constant, *pointer_non_constant = pointer_constant; // conv...
                             ^                      ~~~~~~~~~~~~~~~~
2 errors generated.
**/
   


   int explict_integer1, explict_integer2;
   double explict_double_conversion = explict_integer1 / explict_integer2;






	

 

return 0;
}
