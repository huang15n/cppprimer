#include<iostream>

/**

author : Eddie Huang
Version alpha1 


**/

int main(int argc, const char*argv[]){


// example1 string literals with several lines; the output is not desirable, this is not intended for programmer reading. the whole thing will can concatenated  

std :: cout << "this is line one" 
"this is line2"

<<std :: endl;

std :: cout << "this is \1234 the 123 is associated with the prefix which ends at 3" << std:: endl;



std :: cout << "this is \x12 the x12  is associated with the prefix which ends at 2" << std:: endl;


 /* 
std :: cout << "this is \x1234 the x1234  is associated with the prefix which ends at 2" << std:: endl;

literals.cxx:25:16: warning: hex escape sequence out of range
 std :: cout << "this is \x1234 the x12  is associated with the prefix which ends at 2" << std:: endl;
*/


return 0;
}
