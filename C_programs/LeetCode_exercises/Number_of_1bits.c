/*Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).*/

#include <stdio.h>
#include "my_data_types.h"

u32 hammingWeight(u32 n);

int main()
{
    u32 test_var_u16;
    u32 r_u32;

    test_var_u16 = 0xAAAA;

    r_u32 = hammingWeight(test_var_u16);

    printf("The result is: %d",r_u32);


    return 0;
}

u32 hammingWeight(u32 n) 
{
    u32 cnt = 0U;
    
    while(n>0)
    {
        cnt += n&1U;
        n>>=1U;
    }
    
    return cnt;
}