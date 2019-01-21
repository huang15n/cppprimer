#include<iostream>

/**

author : Eddie Huang
Version alpha1 


**/

int main(){


int iValue = 100;
int &reference = iValue; // this now refers to the iValue

// int &reference_unit; this is wrong, reference must be initialized !!!! 

//now if I assign the value to &reference, it changes the value of iValue, i.e which reference points to 
reference = 200;

std :: cout << "the value of the reference variable now is " << reference << std :: endl;

std :: cout << "the value of the variable now is "  << iValue << std :: endl;
/**
the value of the reference variable now is 200
the value of the variable now is 200

**/
 

iValue = 100;
std :: cout << "the value of the reference variable now is " << reference << std :: endl;

std :: cout << "the value of the variable now is "  << iValue << std :: endl;


/**

int &reference1 = 100; // that is wrong, it must be an object 
double dval = 3.14;
int &reference2 = dval; that is wrong !!! same type

/Users/eddiehuang/Desktop/cppprimer/reference_example.cxx:39:6: error: 
      non-const lvalue reference to type 'int' cannot bind to a temporary of
      type 'int'
int &reference1 = 100; // that is wrong, it must be an object 
     ^            ~~~
/Users/eddiehuang/Desktop/cppprimer/reference_example.cxx:41:6: error: 
      redefinition of 'reference'
int &reference = dval; that is wrong !!! same type
     ^
/Users/eddiehuang/Desktop/cppprimer/reference_example.cxx:15:6: note: previous
      definition is here
int &reference = iValue; // this now refers to the iValue
     ^
/Users/eddiehuang/Desktop/cppprimer/reference_example.cxx:41:24: error: unknown
      type name 'that'
int &reference = dval; that is wrong !!! same type
                       ^
/Users/eddiehuang/Desktop/cppprimer/reference_example.cxx:41:31: error: 
      expected ';' at end of declaration
int &reference = dval; that is wrong !!! same type
                              ^
                              ;
4 errors generated.

**/

return 0;
}
