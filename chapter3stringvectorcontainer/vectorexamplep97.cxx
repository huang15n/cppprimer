#include<iostream>
#include<vector>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	std::vector<int> integer_vector1; // empty 
	std::vector< std::vector<std::string>> string_vector_with_vector;

	std::vector<std::string> default_string_vector; // it has no element 

	std::vector<int> integer_vector2(integer_vector1); //copy the integer_vector1 to 2 
	std::vector<int> integer_vector3 = integer_vector1; //copy integer_vector1 to 3 
/**

	std::vector<std::string> string_vector(integer_vector2);
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/vector:555:5: note: 
      candidate constructor not viable: requires 2 arguments, but 1 was provided
    vector(vector&& __x, const allocator_type& __a);
    ^
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/vector:496:5: note: 
      candidate constructor not viable: requires 3 arguments, but 1 was provided
    vector(size_type __n, const_reference __x, const allocator_type& __a);
    ^

**/



 

return 0;
}
