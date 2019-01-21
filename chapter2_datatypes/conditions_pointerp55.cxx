#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){
	int value1 = 0;
	int value2 = 1024;
	int *pointer1 = &value1;
	int *pointer2 = &value2;
	int *pointer3 = 0;
	int *pointer4 = nullptr;
	int *pointer5 = NULL;

	if(pointer1){
		std :: cout << pointer1 << std :: endl;
	}else {
		std :: cout << "this pointer points to 0" << std::endl;
	}

	if(pointer2){
		std :: cout << pointer2 << std:: endl;
	}

	if(pointer3){
		std :: cout << pointer3 << std :: endl;
	}else {
		std :: cout << "this pointer points to " << pointer3<< std::endl;
	}

	if(pointer4){
		std :: cout << pointer4 << std :: endl;
	}else {
		std :: cout << "this pointer points to "<< pointer4 << std::endl;
	}

	if(pointer5){
		std :: cout << pointer5 << std :: endl;
	}else {
		std :: cout << "this pointer points to " <<  pointer5 <<std::endl;
	}
	



return 0;
}
