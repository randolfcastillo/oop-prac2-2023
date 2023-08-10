#include <iostream>

extern bool is_array_palindrome(int[],int);
extern int sum_integers(int[],int);
extern int palindrome_sum(int[],int);


int main(){
    int integers[6]={1,0,0,0,0,0,1};
   int size=6;

   std :: cout << "Is it a palindrome: " << is_array_palindrome(integers,size) << std :: endl;
   

   std :: cout << "The palindrome sum is: " << palindrome_sum(integers,size)<< std :: endl;
   return 0;
}

