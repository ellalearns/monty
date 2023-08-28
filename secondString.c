#include "monty.h"

char *secondString(char *str, char *deststr)
{
    int pos;
    int counter;
    int secondSpace;

    pos = 0;

    while (str[pos] != ' ' && str[pos] != '\0')
    {
        pos++;
    }

    if (str[pos] == '\0')
    {
        deststr[0] = '\0';
        return (deststr);
    }

    counter = 0;
    secondSpace = 0;

    while (str[pos] != '\0')
    {
        if (str[pos] == ' ')
        {
            secondSpace++;
            if (secondSpace > 1)
            {
                break;
            }
        }

        if (str[pos] != ' ')
        {
            deststr[counter] = str[pos];
            counter++;
        }
        pos++;
    }

    deststr[counter] = '\0';

    return (deststr);
}
