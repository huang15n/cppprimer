#include<iostream>
#include<string>
#include<vector>
/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){


	std::vector<int> vector_regular{1,2,3,4,6,7,8,9};


	auto begin_iterator = vector_regular.begin(), end_iterator = vector_regular.end();
	auto mid_iterator = vector_regular.begin() + vector_regular.size() / 2;


	int element_to_search = 6;


	while(mid_iterator != end_iterator && *mid_iterator != element_to_search){

		if(element_to_search < *mid_iterator){
			end_iterator = mid_iterator;
		}else {
			begin_iterator = mid_iterator + 1;
		}


	}

	if(mid_iterator == end_iterator){
		std :: cout << "cannot find the element" << std::endl;
	}else {
		std :: cout << "we can find it " << std :: endl;
	}






 

return 0;
}
