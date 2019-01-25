#include<iostream>
#include<string>
#include<vector>
/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	std::vector<int> vector_regular(10,10);

	for(auto iterator_access = vector_regular.begin(); iterator_access != vector_regular.end(); ++iterator_access){
	 
		/*
		std::cout << value << std::endl;
		/Users/eddiehuang/Desktop/cppprimer/deferenceaccessp109.cxx:17:34: error: 
      member reference base type 'int' is not a structure or union
                auto value = (*iterator_access).empty();

		*/

   /*
		*iterator_access.empty();
		/Users/eddiehuang/Desktop/cppprimer/deferenceaccessp109.cxx:27:20: error: no
      member named 'empty' in 'std::__1::__wrap_iter<int *>'
                *iterator_access.empty();
                 ~~~~~~~~~~~~~~~ ^



		*/
	}

 

return 0;
}
