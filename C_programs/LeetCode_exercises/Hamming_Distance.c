/*The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
Given two integers x and y, return the Hamming distance between them.*/
#include <stdio.h>
#include "my_data_types.h"

u32 hammingDistance(u32 x, u32 y);

int main()
{
    u32 test_var1_u32,test_var2_u32;
    u32 r_u32;

    test_var1_u32 = 7;
    test_var2_u32 = 4;
    r_u32 = hammingDistance(test_var1_u32, test_var2_u32);

    printf("The result is: %ld\n",r_u32);
    return 0;
}

u32 hammingDistance(u32 x, u32 y)
{
    u32 r, cnt;
    cnt = 0u;
    r = x^y;

    while(r>0U)
    {
        cnt += r&1;
        r>>=1;
    }

    return cnt;

}