#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	std::string s1("this is a lowercase string!");

	for(auto element:s1){
		element = toupper(element); // do not do anything 

	}

	std :: cout << "the string element without reference is " << s1 << std::endl;

	for(auto &element:s1){
		element = toupper(element); // do not do anything 

	}
	std :: cout << "the string element with reference is " << s1 << std::endl;



 

return 0;
}
