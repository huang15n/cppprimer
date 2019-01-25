#include<iostream>
#include<string>
#include<vector>
/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	int *pointers[10]; // *pointer is an array of 10 pointers point to int 
	int array[10]={0}; 
	int (*pointerArray)[10] =  &array;  // pointerArray points to an array of 10 ints 
	int (&arrayReference)[10] = array;  // arrayReference refers to an array of ten ints 


	for (auto &element : array){
		std :: cout << element << std::endl;
	}

	/**
	int &reference[10] = ?  ;  
	// error : no array of references 
	arrayexamplep115.cxx:16:16: error: 'reference' declared as array of references
      of type 'int &'                    ^
arrayexamplep115.cxx:16:28: error: expected expression
                              ^
 
**/
 


 

return 0;
}
