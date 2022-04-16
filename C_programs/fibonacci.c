#include <stdio.h>

#define RUN_NORMAL      0
#define RUN_RECURSIVE   1
unsigned long int Fibo( int n);

int main()
{
    unsigned long int result;
    result = Fibo(5);
    printf("%ld \n", result);
    return 0;
}

unsigned long int Fibo( int n)
{
#if RUN_RECURSIVE    
    if ( n == 0 || n == 1)
        return 1;
    return Fibo(n-1) + Fibo(n-2);

#else
    int i;
    for (i = i; i<=n; i++ );
    {

    }


#endif    
}