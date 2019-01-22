#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){
	std::string line;

	/**
	what      is 
what
is
	**/
	 
	 /**
	while(getline(std::cin,line)){
		if(!line.empty()){
			std::cout << "the size of the string is " << line.size() << std ::endl;
		std::cout << line << std::endl;
	}
	}

	**/
	 
	/**
	while(getline(std::cin,line)){
		 
		std::cout << "the size of the string is " << line.size() << std ::endl;
		std::cout << line << std::endl;
 
	}
	**/

	while(getline(std::cin,line)){
		if(!line.empty()){
			auto length = line.size(); // this is size_type;
			std::cout << "the size of the string is " << length << std ::endl;
		std::cout << line << std::endl;
	}
	}

 

return 0;
}
