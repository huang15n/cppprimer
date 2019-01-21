#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){
	auto i = 0, *pointer = &i; // i is int 0, pointer to int 

/***
	auto x = 0, y = 1.2;
error: 'auto'
      deduced as 'int' in declaration of 'x' and deduced as 'double' in
      declaration of 'y'

 ***/

	int value = 10, &reference1 = value;
	auto alias_reference = reference1; // reference1 is a alias for value , alias_reference is an int 



	const int integer_value = value, &reference_integer = integer_value; 

	std :: cout << "the integer value = " << integer_value << std :: endl;

	std :: cout << "the reference_integer value = " << reference_integer << std :: endl;


	auto auto_deduction_to_integer_value = integer_value; // auto_deduction_to_integer_value is int , top level const igore 


	auto auto_deduction_to_reference_integer = reference_integer; // this is an int, an alais for reference integer whose const is top level  

	auto auto_deduction_to_value = &value; // auto deduction to an int pointer !!!!

	auto auto_deduction_to_const_int = &integer_value; // auto deduction to a const int *


	const auto auto_deduction_to_const_int_top = integer_value; // deduce to the top level const int 

	auto &auto_reference1 = value; // this is a const int& that bound to  integer declared value
	//auto &auto_reference2 = 42; // error, we cannot bind a plain reference to a literal 
	const auto &reference2 = 52; // we can bind a const reference to a literal 


/**
Users/eddiehuang/Desktop/cppprimer/autospecifierp69.cxx:52:4: error: 'auto'
      deduced as 'int' in declaration of 'reference_int' and deduced as
      'const int' in declaration of 'pointer_auto_deduction'
   auto &reference_int = value,  *pointer_auto_deduction = &integer_value;
   ^                     ~~~~~                             ~~~~~~~~~~~~~~
1 error generated.

   auto &reference_int = value,  *pointer_auto_deduction = &integer_value;

**/





return 0;
}
