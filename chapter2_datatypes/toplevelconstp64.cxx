#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

int value = 0;
int *const pointer1 = &value; // we cannot chagne the value of poitner 1, because the const is top lvel 
const int integer_value = 100; // we cannot change integer_value 
const int *pointer2 = &integer_value; // we can change pointer2, const is a low level 

const int *const pointer3 = pointer2; // right most const is top level, left most is not 
const int &reference1 = integer_value; // const in refernece types is alway low level 


value = integer_value;

pointer2 = pointer3; // this pointer3 is top level, pointed to type matches ; the top level is ignored 


/**
int *pointer4 = pointer3; // this p3 is top level but pointer4 is not 

/Users/eddiehuang/Desktop/cppprimer/toplevelconstp64.cxx:28:6: error: cannot
      initialize a variable of type 'int *' with an lvalue of type
      'const int *const'
int *pointer4 = pointer3; // this p3 is top level but pointer4 is not 
     ^          ~~~~~~~~


*/

pointer2 = pointer3; // ??? ok, because the pointer two has the same level low level const qualification as p3 

pointer2 = &reference1; // we convert int* const int * to 
const int &reference2 = integer_value;// correct 





/**
int &reference2 = integer_value;
/Users/eddiehuang/Desktop/cppprimer/toplevelconstp64.cxx:42:6: error: binding
      value of type 'const int' to reference to type 'int' drops 'const'
      qualifier
int &reference2 = integer_value;
     ^            ~~~~~~~~~~~~~

**/


 

return 0;
}
