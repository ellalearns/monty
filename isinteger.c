#include "monty.h"

int isinteger(char *str)
{
    int counter = 0;
    
    if (str[counter] == '\0')
    {
        return (1);
    }

    while (str[counter])
    {
        if (str[counter] < '0' || str[counter] > '9')
        {
            return (1);
        }
        counter++;
    }

    return (0);
}
