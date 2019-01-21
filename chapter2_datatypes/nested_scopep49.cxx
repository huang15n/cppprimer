#include<iostream>

/**

author : Eddie Huang
Version alpha1 


**/

int reuse_variable = 100;


int main(){
	std :: cout << "this is to call the local varibale in main reuse_variable = " << reuse_variable << std :: endl;


	int reuse_variable = 200;
	std :: cout << "this is to call the local varibale in main reuse_variable = " << reuse_variable << std :: endl;

	std :: cout << "this is to call the global varibale =" << ::reuse_variable << std :: endl;




 


return 0;
}

