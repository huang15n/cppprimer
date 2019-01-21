#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){

	int i = 42;
	int &reference1 = i; // now reference1 is bound to i, legal
	const int &reference2 = i; // but you cannot change i
	reference1 = 0;


	/**
		reference2 = 0;
	/Users/eddiehuang/Desktop/cppprimer/referenceConstObjectp62.cxx:17:13: error: 
      cannot assign to variable 'reference2' with const-qualified type
      'const int &'

      /Users/eddiehuang/Desktop/cppprimer/referenceConstObjectp62.cxx:15:13: note: 
      variable 'reference2' declared const here


	**/



 

return 0;
}
