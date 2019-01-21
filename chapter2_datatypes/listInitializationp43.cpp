#include<iostream>

/**

author : Eddie Huang
Version alpha1 


**/

int main(void){



int variable1 = 0;
int variable2 = {0};
int variable3{0};
int variable4(0);


std :: cout << variable1 << std:: endl;

std :: cout << variable2 << std:: endl;
std :: cout << variable3 << std:: endl;
std :: cout << variable4 << std:: endl;


/*

/Users/eddiehuang/Desktop/cppprimer/listInitializationp67.cpp:30:7: note: 
      insert an explicit cast to silence this issue
int a{long_double}, b = {long_double}; 
      ^~~~~~~~~~~
      static_cast<int>( )
int a{long_double}, b = {long_double}; 
*/
//long double long_double = 3.1415926536;
//int a{long_double};

/*

/Users/eddiehuang/Desktop/cppprimer/listInitializationp67.cpp:30:26: note: 
      insert an explicit cast to silence this issue
int a{long_double}, b = {long_double}; 
                         ^~~~~~~~~~~
*/

//int b = {long_double}; 
long double long_double = 3.1415926536;

int c =(long_double);

int d = long_double;


std :: cout << c << std :: endl;
std :: cout << d << std :: endl;



return 0;
}
