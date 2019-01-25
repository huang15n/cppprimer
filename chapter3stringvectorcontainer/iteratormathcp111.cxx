#include<iostream>
#include<string>
#include<vector>
/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	std::vector<int> regular_vector;


	for(decltype(regular_vector.size()) index; index < 10; index++){
		regular_vector.push_back(index);
	}


	auto mid = regular_vector.begin() + regular_vector.size() / 2;

	std:: cout << "the middle element of the entire vector is " << *mid << std::endl;


	for(auto begin_iterator = regular_vector.begin(); begin_iterator != mid; ++begin_iterator){
		std :: cout << *begin_iterator << std :: endl;
	}

	





 

return 0;
}
