/*Given an integer x, return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not.*/

#include <stdio.h>
#include <stdbool.h>
#include "my_data_types.h"

#define TRUE    1U
#define FALSE   0U

bool  isPalindrome(u32 x);


int main()
{
    u32 test_var_u16;
    u32 r_u32;

    test_var_u16 = 212;

    r_u32 = isPalindrome(test_var_u16);

    if(TRUE == r_u32)
        printf("The number is a palindrome");
    
    else
        printf("The number is NOT a palindrome");


    return 0;
}

bool isPalindrome(u32 x)
{

    u32 data1, aux, data2=0;
	data1 = x;

	while(0U != data1)
	{
		aux = data1%10U;
		data1 /= 10U;
		data2 = data2*10U+aux; 
	}
	
	if(x == data2)
		return 1;
	else
	return 0;
    
}