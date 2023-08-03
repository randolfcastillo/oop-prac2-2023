#include <iostream>
extern void print_scaled(int[3][3], int);

int main(){
    int matrix[3][3]={{1, 2, 3,}, {5, 6, 8,}, {9, 8, 8,}};
    int scalar=3;
print_scaled(matrix, scalar);
    return 0;
}