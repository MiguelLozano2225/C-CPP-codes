/*Implement pow(x, n), which calculates x raised to the power */

#include <stdio.h>
#include "my_data_types.h"

double myPow(double x, int n);

int main()
{

    double a = 2.1;

    double r;

    r = myPow(a,-2);

    printf("%.2f", r);

    return 0;
}

double myPow(double x, int n)
{
    if (0U == n)
        return 1U;
    
    else
        return myPow(x,n-1)*x;
}