/*Given a signed 32-bit integer x, return x with its digits reversed. */

#include <stdio.h>
#include "my_data_types.h"


int reverse(int x);

int main()
{
    u32 test_var_u16;
    u32 r_u32;

    test_var_u16 = -512;

    r_u32 = reverse(test_var_u16);

    printf("The result is: %d",r_u32);


    return 0;
}

int reverse(int x)
{
    u32 aux;
    u32 result;
    result = 0;
	
	while(x!=0)
	{
		aux = x%10;
		x/=10;
		result = result *10 +aux;
	}
    
return result;
}