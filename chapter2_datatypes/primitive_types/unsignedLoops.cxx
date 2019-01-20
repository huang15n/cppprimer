#include<iostream>


/** 
type conversion example in c++ primier chapter2 

description: 
the unsiged cannot be less than zero also affect how we write loops after all, we do not plan to print negative numbers . 
this simple change means our loop will never terminate 




he unsigned variable will never reach the point where the counter is compared to 0 with decremental operations in a loop. it simply turns into arbitrary memory address i suppose with output of  
sample running : 
4294823198
4294823197
4294823196
4294823195
4294823194
4294823193
4294823192
4294823191
4294823190
4294823189
4294823188
4294823187
4294823186
4294823185

incorrect loop variation 1 for loop: 

int main(int argc, const char*argv[]){

 for (unsigned i = 10; i >= 0; i--){

std :: cout << i << std :: endl;
}

}
 
incorrect loop variation 1 while loop: 

int main(int argc, const char*argv[]){
 unsigned i = 10;
while(i >= 0){
std :: cout << i << std :: endl;

i--;
}

}


**/
int main(int argc, const char*argv[]){

 for (unsigned i = 10; i >= 0; i--){

std :: cout << i << std :: endl;
}

}
