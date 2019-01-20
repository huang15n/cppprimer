#include<iostream>

int main(int argc, const char*argv[]){






 
unsigned u = -30;
int i = 100;
std :: cout << u - i << std::endl;
 // 4294967166
// converting the negative number to unsigned behaves exactly as we had attempted to assign the negative value to an unsigned objct m tge value wraps around as described 

unsigned x = -10;
unsigned y = -20;
std :: cout << x + y << std :: endl;

//4294967166
//4294967266



return 0;
}
