#include<iostream>

/**

author : Eddie Huang
Version alpha1 


**/
//extern float x = 3.1415;

int main(){

int j = 0; // correct way
// extern int i; // delcared but not defined 
//int j; //defined 
std :: cout << j << std:: endl;


/**
extern float x = 3.1415; // declared and defined 
/Users/eddiehuang/Desktop/cppprimer/extern_definitionp45.cxx:15:14: error: 
      'extern' variable cannot have an initializer
extern float x = 3.1415; // declared and defined 
             ^

**/


 


return 0;
}
