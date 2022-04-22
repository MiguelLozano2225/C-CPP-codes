/*Write a program that reads an array of 100 integers. Display all the pairs of elements whose sum is a given number.*/
#include <stdio.h>
#include "mytypedef.h"

void ReadSumEquals50(u8 *Array, u8 num);

int main()
{
    u8 i;
    u8 EmptyArray_au8[100U];
    u8 My_Array_au8[100U];

    for(i=0; i<100;i++)
        My_Array_au8[i] = i+1;

    ReadSumEquals50(My_Array_au8, 18U);


    return 0;
}

void ReadSumEquals50(u8 *Array, u8 num)
{
    u8 i,j;

    for(i=0; i<100; i++)
    {
        for(j=0; j<=i;j++)
        {
            if( (Array[i] + Array[j]) == num)
            {
                printf("\nFirst Data: %d   Second Data: %d", Array[j], Array[i]);
            }
        }
    }
}
