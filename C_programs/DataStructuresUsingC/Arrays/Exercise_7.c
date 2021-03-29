/*Write a program that computes the sum of the elements that are stored on the main diagonal of
a matrix using pointers.*/
/*
    [1]   2    3
    4    [5]   6    ---> 15
    7     8   [9]
*/
#include <stdio.h>
#include "mytypedef.h"

#define SIZE   3

u16 SumElemOnMainDiag( u8 Matriz[][SIZE]);

int main()
{
    u16 result;
    u8 MyMatrix_mu8[SIZE][SIZE] = {1,2,3,4,5,6,7,8,9};

    result = SumElemOnMainDiag(MyMatrix_mu8);
 
    printf("The result is: %d", result);

    return 0;
}

u16 SumElemOnMainDiag( u8 Matriz[][SIZE])
{
    u8 i,sum;

    for(i=0; i<SIZE;i++)
          sum += *(*(Matriz)+(SIZE *i)+i);

    return sum;
}