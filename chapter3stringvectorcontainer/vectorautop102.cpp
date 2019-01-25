#include<iostream>
#include<vector>
/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){
	std::vector<int> vector_integer{1,2,3,4,5,6,7,8,9};

	for(auto integer: vector_integer){
		integer *= integer;
	}


	for(auto integer : vector_integer){
		std::cout << integer << " ";

	}

	std::cout << std::endl;


for(auto &integer: vector_integer){
		integer *= integer;
	}


	for(auto integer : vector_integer){
		std::cout << integer << " ";

	}

	std::cout << std::endl;
std::vector<int> ::size_type;

/**

	std::vector::size_type;
	/Users/eddiehuang/Desktop/cppprimer/vectorautop102.cpp:41:2: warning: 
      declaration does not declare anything [-Wmissing-declarations]
        std::vector<int> ::size_type;
        ^~~~~~~~~~~~~~~~~~~~~~~~~~~~
1 warning generated.
Eddies-MacBook-Pro-2:cppprimer eddiehuang$ g++ -std=c++17 /Users/eddiehuang/Desktop/cppprimer/vectorautop102.cpp 
/Users/eddiehuang/Desktop/cppprimer/vectorautop102.cpp:41:7: error: 'vector' is
      not a class, namespace, or enumeration
        std::vector::size_type;
             ^
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/iterator:1407:74: note: 
      'vector' declared here
    template <class _Tp, class _Alloc> friend class _LIBCPP_TEMPLATE_VIS vector;
                                                                         ^
1 error generated.
**/



 

return 0;
}
