/* Write a program to count the total number of nonzero elements in a two-dimensional array. */

#include <iostream>
#include "mytypedef.h"
using namespace std;
#define SIZE   3

int main()
{
    u8 **MatZeros_mu8 = new u8*[SIZE];
    u8 Counter_u8 = 0U;


    for(u8 Iterator_u8 = 0U; Iterator_u8 < SIZE; Iterator_u8++)
    {
        MatZeros_mu8[Iterator_u8] = new u8[SIZE];
    }

    MatZeros_mu8[0U][0U] = 0U;
    MatZeros_mu8[0U][1U] = 0U;
    MatZeros_mu8[0U][2U] = 0U;

    MatZeros_mu8[1U][0U] = 1U;
    MatZeros_mu8[1U][1U] = 1U;
    MatZeros_mu8[1U][2U] = 1U;

    MatZeros_mu8[2U][0U] = 1U;
    MatZeros_mu8[2U][1U] = 1U;
    MatZeros_mu8[2U][2U] = 1U;


    for(u8 Iterator_u8 = 0U; Iterator_u8 < SIZE; Iterator_u8++)
    {
       for(u8 Jterator_u8 = 0U; Jterator_u8 < SIZE; Jterator_u8++)
        {
            printf("The value of Matrix[%d][%d] = %d\n", Iterator_u8, Jterator_u8, MatZeros_mu8[Iterator_u8][Jterator_u8]);

           if(0U == MatZeros_mu8[Iterator_u8][Jterator_u8])
           {
               Counter_u8++;
           }
        }
    }

    printf("The total number of non-zeros elemetns are: %d\n",Counter_u8);

    return 0U;
}