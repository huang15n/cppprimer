#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){


	std::string s1;
	std::string s2 = s1; // s2 is a copy of s1 
	std::string s3 = "hiya"; // s3 is a copy of string literal 
	std::string s4(10,'c'); // s4 = 'ccccccccccccc'


	std::string s5 = "another string"; // copy
	std::string s6("direct initialzation"); // direct initialization 
	std::string s7(100,'!'); // direct initialization

	std::cout << s7 << std::endl;

	std::string s8 = string(10,'a');
	std::string temp(100,'@');
	std::string s9 = temp;


 

return 0;
}
