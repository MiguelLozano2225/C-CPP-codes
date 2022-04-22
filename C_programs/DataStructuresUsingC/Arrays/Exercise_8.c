/*Write a program to add two 3 ¥ 3 matrix using
pointers.*/

#include <stdio.h>
#include "mytypedef.h"

#define SIZE    3

void AddMatrix(u8 Matrix1[][SIZE], u8 Matrix2[][SIZE], u8 Matrix_result[][SIZE]);

int main()
{
    u8 Matrix1_mu8[SIZE][SIZE] = {1,2,3,4,5,6,7,8,9};
    u8 Matrix2_mu8[SIZE][SIZE] = {1,2,3,4,5,6,7,8,9};
    u8 MatrixEmpty_mu8[SIZE][SIZE];

    AddMatrix(Matrix1_mu8, Matrix2_mu8, MatrixEmpty_mu8);

    

    return 0;
}

void AddMatrix(u8 Matrix1[][SIZE], u8 Matrix2[][SIZE], u8 Matrix_result[][SIZE])
{
    u8 i,j;

    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
            Matrix_result[i][j] = *(*(Matrix1 + i) + j) + *(*(Matrix2 + i) + j); 
    }

    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
            printf("%d ",Matrix_result[i][j]);
        printf("\n");
    }
}
