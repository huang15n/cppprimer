#include<iostream>
#include<string>
#include"SalesClass.h"

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

int main(){
	Sales_data data_object1, data_object2;

	double price = 0;
	std :: cout << "please enter the book number, unit sold, and price of the book:" << std :: endl;

	std :: cin >> data_object1.bookNo >> data_object1.unit_sold >> price;
	data_object1.revenue = data_object1.unit_sold * price;


	std :: cout << "book no." << data_object1.bookNo << std :: endl;
	std :: cout << "unit sold :" << data_object1.unit_sold << std :: endl;
	std :: cout << "revenue of the book:" << data_object1.revenue << std :: endl;








 

return 0;
}
