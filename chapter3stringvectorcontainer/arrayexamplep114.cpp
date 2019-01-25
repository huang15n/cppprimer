#include<iostream>
#include<string>
#include<vector>
/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){


	const unsigned size_of_array = 10;

	int initial_array1[size_of_array] = {0,1,2};
	int initial_array2[] = {2,3,53};
	int initial_array3[3] = {0,1,2};
	std::string initial_array4 = {"hello","hey"};
	

	// to many initalizer than the size of the array 
	//int initial_array5[2] = {0,1,2};



	char initalizer_character_array1[] = {'c','+','+'};
	char initalizer_character_array2[] = {'c','+','+','\0'};
	char initalizer_character_array3[] = "C++";
	const char initalizer_character_array4[6] = "hey"; // this is not an error even though the null was not placed

	int a[] = {0,1,2};
	/**
	int a2[] = a;
	/Users/eddiehuang/Desktop/cppprimer/arrayexamplep114.cpp:34:6: error: array
      initializer must be an initializer list
        int a2[] = a;
            ^

	a2 = a;
 **/

return 0;
}
