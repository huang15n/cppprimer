#include<iostream>
#include<string>
#include<vector>
/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	int i = 0, j = 0, k = 0; // initialization but assignment 
	const value = i; // initialization but assignment 
	/**
assignmentp144.cxx:17:7: error: expression is not assignable
        1024 = k; // this is a rvalue , error 
        ~~~~ ^
assignmentp144.cxx:18:8: error: expression is not assignable
        i + j = k;
        ~~~~~ ^

	1024 = k; // literal is a rvalue , error 
	i + j = k; // expression is a rvalue , error 

	value = j; // value is a const , nonmodifiable lvalue, error 
**/

	std::vector<int> vector_list ;//initially empty 
	vector_list = {1,2,3,4,5};  // now it has elements 

 

return 0;
}
