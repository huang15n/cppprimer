#include<iostream>
#include<string>
#include<vector>
/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	int grade = 88;
	std::string literal_grade = (grade > 60) ? "good" : "bad";

	// this is lvalue because both are evalauted as lvalues 

	std :: cout << "the literal_grade is " << literal_grade << std::endl;


	//parenthesized conditional expression 
	std :: cout << "the fully parenthesized result value is " << ((grade > 80) ? "excellent" : "average") << std::endl;

  /**
	std:: cout << "the result half parenthesized value is " << (grade > 80) ? "excellent" : "average" ;
conditionaloperatorp151.cxx:26:74: warning: operator '?:' has lower precedence
      than '<<'; '<<' will be evaluated first [-Wparentheses]
  ...std:: cout << "the result half parenthesized value is " << (grade > 80) ?...
     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ ^
conditionaloperatorp151.cxx:26:74: note: place parentheses around the '<<'
      expression to silence this warning
  ...std:: cout << "the result half parenthesized value is " << (grade > 80) ?...
                                                                             ^
     (                                                                      )
conditionaloperatorp151.cxx:26:74: note: place parentheses around the '?:'
      expression to evaluate it first
  ...parenthesized value is " << (grade > 80) ? "excellent" : "average" ;
                                              ^
                                 (                                     )
conditionaloperatorp151.cxx:26:76: warning: expression result unused
      [-Wunused-value]
  ...half parenthesized value is " << (grade > 80) ? "excellent" : "average" ;
**/

/**
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/string:3645:1: note: 
      candidate template ignored: could not match 'basic_string' against
      'basic_ostream'
operator> (const basic_string<_CharT, _Traits, _Allocator>& __lhs,
^
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/string:3654:1: note: 
      candidate template ignored: could not match 'basic_string' against
      'basic_ostream'
operator> (const basic_string<_CharT, _Traits, _Allocator>& __lhs,
^
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/string:3663:1: note: 
      candidate template ignored: could not match 'const _CharT *' against
      'std::__1::basic_ostream<char>'
operator> (const _CharT* __lhs,
^
/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1/vector:3323:1: note: 
      candidate template ignored: could not match 'vector' against
      'basic_ostream'
operator> (const vector<_Tp, _Allocator>& __x, const vector<_Tp, _Alloca...
^
1 warning and 1 error generated.
	std :: cout << "the unparenthesized result value is " << grade > 80 ? "excellent" : "fail" ;


**/
	

 

return 0;
}
