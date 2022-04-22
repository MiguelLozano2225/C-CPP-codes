/* Write a program to read and display a square (using functions).*/

#include <iostream>
#include "mytypedef.h"
using namespace std;

#define SQUARE_SIZE     5U

void PrintSquare(u8 SqrSize_u8);

int main()
{

    u8 Data = 3U;
    PrintSquare(Data);

    return 0;
}

void PrintSquare(u8 SqrSize_u8)
{
    for(u8 Iterator_u8 = 0U; Iterator_u8 < SqrSize_u8; Iterator_u8++)
    {
        for(u8 Jterator_u8 = 0U; Jterator_u8 < SqrSize_u8; Jterator_u8++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
