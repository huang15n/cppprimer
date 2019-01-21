#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	const int value = 0, &reference = value;

	decltype(value) x = 0; // this has a type of const int 

	decltype(reference) y = x; // this has a type of const int & and it is bound to x 

/**
/Users/eddiehuang/Desktop/cppprimer/decltypep71.cpp:20:22: error: declaration of
      reference variable 'z' requires an initializer
        decltype(reference) z; 
	decltype(reference) z; 

 **/


	int regular_value = 100, *pointer = &regular_value, &reference_to_regular = regular_value;

	decltype(reference + 1) decltype_value1; // this is fine, it yields an int , the value is unitialized 

/**
/Users/eddiehuang/Desktop/cppprimer/decltypep71.cpp:31:22: error: declaration of
      reference variable 'another_decltype_value2' requires an initializer
        decltype (*pointer) another_decltype_value2; // this is an error 
                            ^~~~~~~~~~~~~~~~~~~~~~~
1 error generated.

	decltype (*pointer) another_decltype_value2; // this is an error 

**/


	/***
/Users/eddiehuang/Desktop/cppprimer/decltypep71.cpp:43:28: error: declaration of
      reference variable 'finally_decltype' requires an initializer
        decltype((regular_value)) finally_decltype;
                                  ^~~~~~~~~~~~~~~~

	decltype((regular_value)) finally_decltype;
***/
return 0;
}
