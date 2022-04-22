/*Write a program to input the elements of a twodimensional array. Then from this array, make two
arrays—one that stores all odd elements of the two-dimensional array and the other that stores
all even elements of the array.*/

#include <stdio.h>
#include "mytypedef.h"

#define SIZE    3

void Twodimen_OddEven_Matrix(u8 *OddArray_au8, u8 *EvenArray_au8, u8 Matrix_mu8[][SIZE], u8 *OddSize_u8, u8 *EvenSize_u8);

int main()
{
    u8 Jterator_u8;
    u8 OddSize_u8 = 0U;
    u8 EvenSize_u8 = 0U;
    u8 Array[SIZE][SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    u8 OddArraay[SIZE * SIZE];
    u8 EvenArray[SIZE * SIZE];

    Twodimen_OddEven_Matrix(OddArraay,EvenArray, Array, &OddSize_u8, &EvenSize_u8);

    for(Jterator_u8 = 0U; Jterator_u8 < OddSize_u8; Jterator_u8++)
    {
        printf("Printing the values for Odd Array: %d\n", OddArraay[Jterator_u8]);
    }

    for(Jterator_u8 = 0U; Jterator_u8 < EvenSize_u8; Jterator_u8++)
    {
        printf("Printing the values for Even Array: %d\n", EvenArray[Jterator_u8]);
    }

    return 0;
}

void Twodimen_OddEven_Matrix(u8 *OddArray_au8, u8 *EvenArray_au8, u8 Matrix_mu8[][SIZE], u8 *OSize_u8, u8 *ESize_u8)
{
    u8 Iterator_u8 =  SIZE * SIZE;
    u8 *ptr = Matrix_mu8[0U];

    while(Iterator_u8)
    {

        if(*ptr & 1)
        {
            *OSize_u8++;
            *OddArray_au8 = *ptr;
            printf("ptr ODD value: %d \n", *OddArray_au8);
            OddArray_au8++;
        }
        else
        {

            *ESize_u8++;
            *EvenArray_au8 = *ptr;
            printf("ptr EVEN value: %d \n", *EvenArray_au8);
            EvenArray_au8++;
        }

        Iterator_u8--;
        ptr++;
    }
    printf("El numero de Elemetnos impares es: %d\n", *OSize_u8);
    printf("El numero de Elemetnos pares es: %d\n", *ESize_u8);
}