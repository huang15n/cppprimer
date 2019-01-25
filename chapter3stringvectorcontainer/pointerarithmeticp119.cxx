#include<iostream>
#include<string>
#include<vector>
/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	constexpr size_t size_of_array = 5;



	int array[size_of_array] = {1,2,3,4,5};

	int *pointer_to_array = array;

	//pointer_to_array += 4; //fine 

	int *error_pointer = pointer_to_array + 10; 


	auto size_of_it = std::end(array) - std::begin(array);
	std::cout << "the size of the array is : " << size_of_it << std::endl;


	int last_element = *(array+4);
	std::cout << "the last element is " << last_element << std::endl;


	int *pointer_to_element = &array[2]; // index by 2 
	int second_value = pointer_to_element[1]; //pointer_to_element + 1 
	

 

return 0;
}
