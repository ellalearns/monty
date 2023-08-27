#include "monty.h"

char *secondString(char *str)
{
    int pos;
    int counter;
    char *newstr;

    newstr = malloc(sizeof(char) * strlen(str));
    pos = 0;

    while (str[pos] != ' ' && str[pos])
    {
        pos++;
    }

    pos++;

    counter = 0;

    while (str[pos])
    {
        newstr[counter] = str[pos];
        counter++;
        pos++;
    }

    return (newstr);
}
