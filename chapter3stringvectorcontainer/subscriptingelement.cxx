#include<iostream>
#include<string>
#include<vector>
/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	std::vector<int> vector_integer; // this is a sequence of empty vectors 

	/**
	Eddies-MacBook-Pro-2:cppprimer eddiehuang$ ./a.out
Segmentation fault: 11

	for(decltype(vector_integer.size())index = 0; index != 10; index++){
		vector_integer[index] = index;
	}
	// disaster : the vector integer has no element 

	for (auto &v: vector_integer){
		std::cout << v << std::endl;
	}

	**/

	for(decltype(vector_integer.size())index = 0; index != 10; index++){
		vector_integer.push_back(index);
	}

	for(int vector_integer_element : vector_integer){
		std :: cout << vector_integer_element << std::endl;
	}


 

return 0;
}
