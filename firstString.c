#include "monty.h"

char *firststr(char *str, char *deststr)
{
    int pos = 0;
    int counter = 0;

    while (str[pos] != ' ')
    {
        pos++;
    }

    if (str[0] == '$')
    {
        return (str);
    }

    while (counter < pos)
    {
        deststr[counter] = str[counter];
        counter++;
    }

    return (deststr);

}
