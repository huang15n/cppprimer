#include<iostream>

/**

author : Eddie Huang
Version alpha1 


**/

int main(int argc, const char*argv[]){

int variable1 = 0,variable2 = 0;
std :: cout <<"please enter two numbers" << std::endl;
std :: cin >> variable1 >> variable2;
std :: cout << "the value of " <<variable1 << " + " << variable2<< " = " << variable1 + variable2  << std::endl;
// i am aware of this mess of output if << and "" double quatation mark is not ordered and closed properl. 
// std :: cout << "the value of " variable1 << " + " << std::variable2 <<" = " << variable1 + variable2 << std::endl;


return 0;


}
