
#ifdef SALES_DATA_H
#define SALES_DATA_H

#include<iostream>

/**

author : Eddie Huang
Version alpha1 
-Wall -Wextra -Werror

**/

struct Sales_data{
	std :: string book_name = "";
	unsigned unit_sold = 0;
	long bookNo = 0;
	double price = 0.0;

	double revenue = 0.0;

};

#endif