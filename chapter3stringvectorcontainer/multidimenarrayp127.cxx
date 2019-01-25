#include<iostream>
#include<string>
#include<vector>
/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

int multi_array1[2][3] ={
	{2,2,2},
	{1,1,1}

};


/**
int multi_array1[2][3] ={
	{2,2},
	{1,1},
	{3,3}

};
multidimenarrayp127.cxx:17:2: error: excess elements in array initializer
        {3,3}
**/

int multi_array2[2][4] = {1,2,3,4,5,6,7,8};

/**
multidimenarrayp127.cxx:32:43: error: excess elements in array initializer
int multi_array2[2][4] = {1,2,3,4,4,5,6,7,8};
**/


for(auto &row: multi_array2){
	for(auto &col : row){
		std::cout << col << " ";
	}
	std :: cout << std :: endl;
}

using integer_array_alias = int[4];
typedef int integer_array_alias[4];


for(integer_array_alias *p = multi_array2; p != multi_array2 + 3; ++p){
	for(int *q = *p; q != *p + 4; q++){
		std :: cout << *q <<  " " ;
	}
	std :: cout << std::endl;

}


 

return 0;
}
