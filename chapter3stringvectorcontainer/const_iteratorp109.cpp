#include<iostream>
#include<string>
#include<vector>
/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	std::vector<int> regular_vector(10,2);

	auto regular_iterator = regular_vector.begin();

	const std::vector<int> const_vector(10,20);

	auto const_iterator = const_vector.begin();


	for(auto normal_iterator = regular_vector.begin(); normal_iterator != regular_vector.end(); ++normal_iterator){
		*normal_iterator = *normal_iterator * 10;
	}

	for(auto item : regular_vector){
		std :: cout << item << std::endl;
	}

	for(auto unchanged_iterator = regular_vector.cbegin(); unchanged_iterator != regular_vector.cend(); ++unchanged_iterator){
		
}
		// this is the new standard 
		/*.   Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/iterator:1331:31: note: 
      function 'operator*' which returns const-qualified type
      'std::__1::__wrap_iter<const int *>::reference' (aka 'const int &')
      declared here
    _LIBCPP_INLINE_VISIBILITY reference operator*() const _NOEXCEPT_DEBUG
                              ^~~~~~~~~
1 error generated.
		*unchanged_iterator += *unchanged_iterator;
		*?)

		*/

	







/***
	const std::vector<int> const_vector(10,20);

	auto const_iterator = const_vector.begin();

	for(auto unchanged_iterator = const_vector.begin(); unchanged_iterator != const_vector.end(); ++unchanged_iterator){
		*unchanged_iterator = *unchanged_iterator * 20;
	}

	for(auto element_unchange_vector : const_vector){
		std::cout<< element_unchange_vector << std::endl;
	}
	/Users/eddiehuang/Desktop/cppprimer/const_iteratorp109.cpp:33:23: error: cannot
      assign to return value because function 'operator*' returns a const value
                *unchanged_iterator = *unchanged_iterator * 20;
                ~~~~~~~~~~~~~~~~~~~ ^
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/iterator:1331:31: note: 
      function 'operator*' which returns const-qualified type
      'std::__1::__wrap_iter<const int *>::reference' (aka 'const int &')
      declared here
    _LIBCPP_INLINE_VISIBILITY reference operator*() const _NOEXCEPT_DEBUG

	**/

 

return 0;
}
