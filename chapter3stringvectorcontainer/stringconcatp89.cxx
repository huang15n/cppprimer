#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	std::string s1 = "hello!", s2 = "world\n";
	std::string s3 (s1 + s2);
	std::cout << s3 << std :: endl;


/**
	std::s4 = "2" + "1": // error
	/Users/eddiehuang/Desktop/cppprimer/stringconcatp89.cxx:18:16: error: invalid
      operands to binary expression ('const char *' and 'const char *')
        std::s4 = "2" + "1": // error
                  ~~~ ^ ~~~
/Users/eddiehuang/Desktop/cppprimer/stringconcatp89.cxx:18:7: error: no member
      named 's4' in namespace 'std'
        std::s4 = "2" + "1": // error
        ~~~~~^
**/

	//std::string s4 = "2" + "1" + s3; // error 

	//std::string s4 = ("2" + "1") + s3; // error 



 

return 0;
}
