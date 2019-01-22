#include<iostream>
#include<vector>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	std::vector<std::string> article_vector = {"an","the","an","le","la"};

	std::vector<std::string>list_vector{"an","the","an","le","la"};
	std::vector<int> count_integer(10,1);
	std::vector<int> default_vector_integer(10);


	for(auto& element : default_vector_integer){
		std::cout<<element << std::endl;
	}
 /**
	std::vector<int> vector_error_integer_direct = 10;
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/vector:547:5: note: 
      candidate constructor not viable: no known conversion from 'int' to
      'std::__1::vector<int, std::__1::allocator<int> > &&' for 1st argument
    vector(vector&& __x)
    ^

	**/

/**
/Users/eddiehuang/Desktop/cppprimer/vectorinitp98.cxx:21:27: error: expected
      expression
        std::vector<std::string> error_vector("an","the","an","le","la");
                                 ^
1 error generated.

	std::vector<std::string> error_vector("an","the","an","le","la");
**/

 

return 0;
}
