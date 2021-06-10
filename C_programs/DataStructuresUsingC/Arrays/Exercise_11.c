/*Write a program to input the elements of a twodimensional array. Then from this array, make two
arrays—one that stores all odd elements of the two-dimensional array and the other that stores
all even elements of the array.*/

#include <stdio.h>
#include "mytypedef.h"

#define SIZE    3

void Twodimen_OddEven_Matrix(u8 *Array1[], u8 *Array2[], u8 *Array3[]);

int main()
{
    u8 i,j;
    u8 Array[SIZE][SIZE] = {1,2,3,4,5,6,7,8,9};
    u8 OddArraay[SIZE][SIZE];
    u8 EvenArray[SIZE][SIZE];

    Twodimen_OddEven_Matrix(Array,OddArraay,EvenArray);

 /*   for(i=0; i<SIZE; i++)
    {
        for(j=0; j<SIZE; j++)
        {
            printf("Odd Matrix: %d   ", OddArraay[i][j]);
            printf("Even Matrix: %d", EvenArray[i][j]);
            printf("\n");
        }
    }*/

    return 0;
}

void Twodimen_OddEven_Matrix(u8 *Array1[], u8 *Array2[], u8 *Array3[])
{
    u8 i,j,k;

    while(i >= (SIZE * SIZE))
    {
        if((**Array1) & 1)
        {
            *Array2 = *Array1;
            Array2++;
        }

        else
        {
            *Array3 = *Array1;
            Array3++;
        }
        printf("%d  %d", i,*Array1);
        i++;
        Array1++;

    }

}