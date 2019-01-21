#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){
const int value = 1024;
const int &reference1 = value; // that is ok, both reference and underlying object are const 
//reference1 = 20; // error , reference1 is a reference to const 
//int &reference2 = value; // non const reference to a const object 
 
const int &reference2 = value;

std :: cout << "the references2= " << reference2 << std :: endl;
std :: cout << "the &references2= " << &reference2 << std :: endl;

const int &reference3 = 100;
std :: cout << "the references3= " << reference3 << std :: endl;
std :: cout << "the &references3= " << &reference3 << std :: endl;



/***

/Users/eddiehuang/Desktop/cppprimer/constQualifier61.cxx:27:6: error: non-const
      lvalue reference to type 'int' cannot bind to a temporary of type 'int'
int &reference4 = reference2 * 2;
     ^            ~~~~~~~~~~~~~~

int &reference4 = reference2 * 2;
std :: cout << "the references4= " << reference4 << std :: endl;
std :: cout << "the &references4= " << &reference4 << std :: endl;


***/


const int &reference4 = reference2 * 2;
std :: cout << "the references4= " << reference4 << std :: endl;
std :: cout << "the &references4= " << &reference4 << std :: endl;



return 0;
}



