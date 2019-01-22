#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	std::string s1("hello, this is Eddie");
	for(auto element: s1){
		std::cout << element;
	}

	std :: cout << ""<< std::endl;


	std::string s2("punctuation !!!!!!!!!!!!!!!!!........");
	decltype(s2.size()) number_of_punc = 0;
	for(auto element: s2){
		if(ispunct(element)){
			++number_of_punc;
		}
	}

	std:: cout <<"the number of punctuation in string2 = " << number_of_punc << std::endl;

 

return 0;
}
