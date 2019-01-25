#include<iostream>
#include<string>
#include<vector>
/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	std::vector<int>integer_vector(10,20);
	auto begin_element = integer_vector.begin();
	auto end_element = integer_vector.end();



	for(auto iterator_element : integer_vector){
		std :: cout <<  iterator_element << std::endl;
	}
	std :: cout << std::endl;


	std::string string_elements("some string that is good to use!");
	if(string_elements.begin() != string_elements.end()){
		auto iterator = string_elements.begin();
		*iterator = toupper(*iterator);
	}

	std :: cout << "the string now is :" << string_elements << std::endl;

	 

	 // this is fatal error 
	/**
	auto *iterator_element = integer_vector.begin();
Eddies-MacBook-Pro-2:cppprimer eddiehuang$ g++ -std=c++17 /Users/eddiehuang/Desktop/cppprimer/iteratorautop109.cxx 
/Users/eddiehuang/Desktop/cppprimer/iteratorautop109.cxx:21:8: error: variable
      'iterator_element' with type 'auto *' has incompatible initializer of type
      'std::__1::vector<int, std::__1::allocator<int> >::iterator' (aka
      '__wrap_iter<int *>')
        auto *iterator_element = integer_vector.begin();
              ^                  ~~~~~~~~~~~~~~~~~~~~~~
1 error generated.
 **/



return 0;
}
