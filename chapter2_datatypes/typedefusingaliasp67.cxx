#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	typedef double new_double_type;


	new_double_type value = 1.23;
	std :: cout << value << std :: endl;

	 using this_another_double = double;


   this_another_double value = 1.23;

   std :: cout << value << std :: endl;

 

return 0;
}
