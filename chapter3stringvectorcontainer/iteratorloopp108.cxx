#include<iostream>
#include<string>
#include<vector>
/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	std::string random_string("I do not know what is this !");


	for(auto iterator = random_string.begin(); iterator != random_string.end() && !isspace(*iterator); iterator++ ){
		// iterator advances by one 
		*iterator = toupper(*iterator);
	}


	std :: cout << "the string now becomes :" << random_string << std::endl;


	std::vector<int> ::iterator iterator1;
	std::string::iterator iterator2;
	std::vector<int> ::const_iterator iterator3;
	std::string::const_iterator iterator4;

 

return 0;
}
