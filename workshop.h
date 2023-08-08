#include <iostream>

// Part 2: 
void changeValue(double* ptr){
     *ptr=42.0;
}


//Part 3: 
void printArray(double*array, int n){

for (int i=0;i<n;i++){
    std :: cout << array[i]<< " ";

}
}

// Part 4:
double arrayMax(double* array2, int n2 ){
   double max=array2[0];
    for (int i=0; i<n2 ;i++){
        if (max>array2[i+1]){
        max=array2[i];
        break;
        }
    }
return max;
}

// Part 5:
//double* dynamicArray(int N){
  // double *new_array=new double[N];
   //for (int i=0;i<N;i++){
    //new_array[i]=i+1.0;
   //}
   //return new_array;
//}

// Part 7:

double* dynamicArray(int N, double M){
   double *new_array=new double[N];
   for (int i=0;i<N;i++){
    new_array[i]=M;
   }
   return new_array;
}

