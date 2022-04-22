/* Write a program that computes the product of the elements that are stored on the diagonal above the main diagonal. */

/*
    1   [2]   3    4
    5   6    [7]    8             
    9   10   11   [12]  -----> 168
    13  14   15    16   

*/
#include <iostream>
#include "mytypedef.h"
using namespace std;
#define SIZE   4

u16 MulAboveOnMainDiag( u8 Matriz[][SIZE]);

int main()
{
    u16 result;
    u8 MyMatrix_mu8[SIZE][SIZE] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    result = MulAboveOnMainDiag(MyMatrix_mu8);
 
    printf("The result is: %d\n", result);

    return 0;
}

u16 MulAboveOnMainDiag( u8 Matriz[][SIZE])
{
    u16 mul_u16 = 1U;
    u8 *ptr = Matriz[0U];

    for(u8 Iterator_u8= 0U ; Iterator_u8<SIZE-1U; Iterator_u8++)
    {
        /* Accesing as a Matrix */
        printf("%d\n",*(*(Matriz)+(SIZE *Iterator_u8)+Iterator_u8 + 1)); 
        /* Accesing as a pointer */
        mul_u16 *= *(ptr + (Iterator_u8*SIZE) + Iterator_u8 + 1U);
    }
    return mul_u16;
}