#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

 const int i = function();
 const int j = 100;
 // const int x; must be initialized 
 int x = 200;
 const int y = x; //ok
 int z = y; // ok

return 0;
}

int function(){
	return 1;

}
