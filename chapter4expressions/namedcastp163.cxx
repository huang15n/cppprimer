#include<iostream>
#include<string>
#include<vector>
/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	
	/**

	double slope = std::static_cast<double>(j) / std::static_cast<double>(i);
	namedcastp163.cxx:16:22: error: expected unqualified-id
        double slope = std::static_cast<double>(j) / std::static_cast<do...
                   
**/

	int j = 2, i = 1;
double slope = static_cast<double>(j) / static_cast<double>(i);
	std::cout << "the slope of j and i is " << slope << std::endl;





	void* void_pointer = &j;
	double *deference_pointer = static_cast<double*>(void_pointer);

	const char *pointer_to_character;
	char *pointer_const_to_by_character = const_cast<char*>(pointer_to_character);





	const char *const_char_pointer;
	/**
	//char *char_pointer = static_cast<char*>(const_char_pointer);
namedcastp163.cxx:42:23: error: static_cast from 'const char *' to 'char *' is
      not allowed
        char *char_pointer = static_cast<char*>(const_char_pointer);

	**/
	/*
	static_cast<std::string>(const_char_pointer); // converting literal to string 
namedcastp163.cxx:42:23: error: static_cast from 'const char *' to 'char *' is
      not allowed
        char *char_pointer = static_cast<char*>(const_char_pointer);
                             ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
namedcastp163.cxx:43:2: warning: expression result unused [-Wunused-value]
        static_cast<std::string>(const_char_pointer); // converting lite...
        ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

*/
	//const_cast<std::string>(const_char_pointer); // error: const_cas only changes constness 

	


	int *pointer_to_integer;
	char *pointer_to_character_from_integer = reinterpret_cast<char *>(pointer_to_integer);

 

return 0;
}
