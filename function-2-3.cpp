#include <iostream>

bool is_array_palindrome(int integers[], int length){
bool palindrome=false;
if (length>=1){
 for (int i=0; i<length/2;i++){
    if (integers[i]==integers[length-i]){
        palindrome=true;
    
       }
     
 }
 }

 else{
    palindrome=false;
 }
return palindrome;
}


int sum_integers(int integers[], int length){
    int sum=0;
    if (length>=1){
        for (int i=0;i<length;i++){
            sum=sum+integers[i];
        }
    }
    else{
        sum=-1;
    }
    return sum;
}

int palindrome_sum(int integers[], int length){
    int sum=0;
    bool palindrome=is_array_palindrome(integers,length);

    if(length>=1){
        if (palindrome==true){
            sum=sum_integers(integers,length);
        }
        else{
            sum=-2;
        }

    }
    else{
        sum=-1;
    }
    return sum;
}