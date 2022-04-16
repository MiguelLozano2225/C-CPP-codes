/* Write a program that calculates the sum of squares
of the elements. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mytypedef.h"

#define SIZE   25U

float SumSquare(u8 *A);

int main()
{

    u8 Array_au8[SIZE];
    float Result_u16;

    for(u8 Iterator_u8 = 0U; Iterator_u8<SIZE; Iterator_u8++)
    {
        Array_au8[Iterator_u8] = Iterator_u8 + 1U;
    }

    Result_u16 = SumSquare(Array_au8);

    printf("The result of the sum of squares is: %.2f\n",Result_u16);

    return 0;
}


float SumSquare(u8 *A)
{
    float Sum_u16 = 0U;
    float TempSqr_u8 = 0U;
    u8 *ptr = &A[0];

    for(u8 Iterator_u8; Iterator_u8<SIZE; Iterator_u8++,ptr++)
    {
        TempSqr_u8 = sqrt(*ptr);

        if(pow(TempSqr_u8,2) == *ptr)
        {
            printf("The value of Square is %d \n",*ptr);
            Sum_u16 += *ptr;
        }

    }
    return Sum_u16;
}
