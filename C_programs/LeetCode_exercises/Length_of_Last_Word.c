
/*Given a string s consists of some words separated by spaces, return the length of the last word in the string. If the last word does not exist, return 0.

A word is a maximal substring consisting of non-space characters only.*/
#include <stdio.h>
#include <string.h>
#include "my_data_types.h"

int lengthOfLastWord(char * s);

int main()
{
    u32 test_var_u32;

    test_var_u32 = lengthOfLastWord("yolo");

    printf("%d", test_var_u32);

    return 0;
}

int lengthOfLastWord(char * s){

    u32 size = strlen(s);
    u32 counter = 0;
    size -= 1;

    while(size >= 0 ) 
    {
        if(s[size] != ' ')
        {
            size--;
            counter++;
        }

        else if(counter == 0 && s[size] == ' ')
        {
          size--;
        }
        else
        {
          break;
        }
    }

    return counter;
}