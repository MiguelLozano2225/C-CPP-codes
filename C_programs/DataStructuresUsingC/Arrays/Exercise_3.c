/*Write a program to interchange the second element with the second last element.*/
#include <stdio.h>
#include "mytypedef.h"

#define SIZE 15U

int main()
{
    u8 aux, i;
    u8 MyArray_au8[SIZE];

    for(i=0; i<SIZE; i++)
        MyArray_au8[i] = i+1;

    aux = MyArray_au8[1];
    MyArray_au8[1] = MyArray_au8[SIZE-2];
    MyArray_au8[SIZE-2] = aux;

    for(i=0 ; i<SIZE; i++)
        printf("%d ", MyArray_au8[i]);

    return 0;
}