#include <iostream>

extern int bin_to_int(int[],int);

int main(){
int binary[4]={1,0,0,1};
int length=4;
std :: cout << "The decimal number is: " << bin_to_int(binary,length) << std :: endl;
}