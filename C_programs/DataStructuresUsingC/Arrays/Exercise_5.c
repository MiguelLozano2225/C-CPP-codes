/*Write a program to compute the sum and average of the elements of a two-dimensional array.*/
#include <stdio.h>
#include "mytypedef.h"

#define SIZE 3


u16 Average(u8 Matrix[][SIZE]);

int main()
{
    u8 i,j, sum_result;
    u8 Matrix_mu8[SIZE][SIZE];

    for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            Matrix_mu8[i][j] = i+j+1;
            printf("The valus in the position[%d][%d] is: %d\n", i,j,Matrix_mu8[i][j]);
        }
    }

    sum_result = Average(Matrix_mu8);
    printf("The Average of the elemets is: %d\n", sum_result);

    return 0;
}

u16 Average(u8 Matrix[][SIZE])
{
    u8 *ptr;
    u16 sum = 0;
    u8 counter =  SIZE*SIZE;

    ptr = &Matrix[0U][0U];

    while(counter)
    {
        sum += *ptr;
        ptr++;
        counter--;
    }
    printf("The value of the sum is: %d\n", sum);

    return (sum / (SIZE * SIZE));
}