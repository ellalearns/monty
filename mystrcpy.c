#include "monty.h"

char *mystrcpy(char *str, char *newstr)
{
    int counter;
    counter = 0;
    while (str[counter] != '$')
    {
        newstr[counter] = str[counter];
        counter++;
    }
    newstr[counter] = '\0';
    
    return (newstr);
}
