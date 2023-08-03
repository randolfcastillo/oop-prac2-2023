#include <iostream>
extern void print_summed(int[3][3], int[3][3]);

int main(){
    int matrix1[3][3]={{1, 2, 3,}, {5, 6, 8,}, {9, 8, 8,}};
    int matrix2[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

print_summed(matrix1, matrix2);
    return 0;
}
