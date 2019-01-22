#include<iostream>
#include<vector>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

std::vector<int> vector_integers;

for(int i = 0; i <= 100; i++){
	vector_integers.push_back(i);
}

std::cout<< "the elements in the vector are : ";

for(auto &elements : vector_integers){
	std::cout<< elements << std::endl;
}

 

return 0;
}
