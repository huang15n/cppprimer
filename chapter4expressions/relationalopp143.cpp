#include<iostream>
#include<string>
#include<vector>
/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	int i = 3;
	int j = 4;
	int k = 10;
	if(i < j < k){
		std :: cout <<"i < j < k" << std::endl;
	}else {
		std :: cout << "undefined behaviour " << std::endl;
	}

	if((i < j) && (j < k)){

	}

	int value = 100;

	int *pointer = &value;
	if(pointer){
		std::cout << "the value of the pointer is converted to true before \n" << pointer;
	}
	if(pointer == true){
		std::cout << "the value of the pointer is converted to true before \n" << pointer;
	}


 

return 0;
}
