#include<iostream>
#include<string>
#include<vector>
/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	int integer_array[] = {1,2,3,4,5,6};
	std::vector<int> vector_from_array(std::begin(integer_array),std::end(integer_array));

	for(auto &element: vector_from_array){
		std::cout<< element << std::endl;
	}

 

return 0;
}
