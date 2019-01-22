#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){


	std::string s1("this is to upper");

	for(decltype(s1.size()) index = 0; index != s1.size() && !isspace(s1[index]); ++index ){
		s1[index] = toupper(s1[index]);
	}

	std::cout << "the string now has become:" << s1 << std::endl; 

	//the string now has become:THIS is to upper

 

return 0;
}
