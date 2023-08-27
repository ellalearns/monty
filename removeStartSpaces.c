#include "monty.h"

char *removeStartSpaces(char *str, char *newstr)
{
    int pos;
    int newpos;

    pos = 0;

    if (str[pos] == ' ')
    {
        while (str[pos] == ' ')
        {
            pos++;
        }
    }

    newpos = 0;

    while (str[pos])
    {
        newstr[newpos] = str[pos];
        newpos++;
        pos++;
    }

    return (newstr);
}
