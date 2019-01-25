#include<iostream>
#include<string>
#include<vector>
/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	std::string numbers[] = {"one","two","three"};

	/**

	std::string *string_pointer = numbers[0];

	arraypointerp117.cxx:16:15: error: no viable conversion from 'std::string' (aka
      'basic_string<char, char_traits<char>, allocator<char> >') to
      'std::string *' (aka 'basic_string<char, char_traits<char>,
      allocator<char> > *')
        std::string *string_pointer = numbers[0]; // this is a string po...


	***/

	std::string *string_pointer = &numbers[0]; // this is a string pointer to the first element of the array element 

	std::string *another_string_pointer = numbers; // this is automatically cover the pointer points to the first elemnt 


/**
rraypointerp117.cxx:21:6: error: excess elements in scalar initializer
        int integer_array = {1,2,3,4,5,6,7};

**/

	int integer_array[] = {1,2,3,4,5,6,7};
	auto array_pointer_fact(integer_array);
	/**
	array_pointer_fact = 20; // error 
	arraypointerp117.cxx:42:23: error: assigning to 'int *' from incompatible type
      'int'
        array_pointer_fact = 20; // error 
*/

	int integer_array2[6] = {1,2,0,3,4,5};
 

/*

	int *end_pointer = integer_array2[5];

arraypointerp117.cxx:51:7: error: cannot initialize a variable of type 'int *'
      with an lvalue of type 'int'
        int *end_pointer = integer_array2[5];
             ^             ~~~~~~~~~~~~~~~~~

	*/

	int *end_pointer = &integer_array2[6];
	for(int *begin_pointer = integer_array2; begin_pointer != end_pointer; begin_pointer++){
		std::cout << *begin_pointer << std::endl;
	}


	int *first_pointer = std::begin(integer_array);
	int *last_pointer = std::end(integer_array);

	while(first_pointer != last_pointer && *first_pointer >= 0){
		std::cout << *first_pointer << std::endl;
		first_pointer ++;


	}


 

return 0;
}
