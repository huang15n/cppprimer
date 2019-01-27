#include<iostream>
#include<string>
#include<vector>
/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){
	std::string string_undefine("hello, this is me");

	auto begin_iterator = string_undefine.begin();
	auto end_iterator = string_undefine.end();
/*
	while(begin_iterator != end_iterator && !isspace(*begin_iterator)){
		*begin_iterator = toupper(*begin_iterator);
	}
*/


	std::string string_access("this is the string access tool"), *pointer = &string_access;
	auto n = string_access.size();
	n = (*pointer).size();
	n = pointer -> size();


	//*pointer.size(); // error, pointer is a pointer and has no member naemd size 


 

return 0;
}
