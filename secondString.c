#include "monty.h"

/**
 * secondString - gets second part of a string after the first space
 * @str: original line str
 * @deststr: destination str
 * Return: destination str
*/
char *secondString(char *str, char *deststr)
{
int pos;
int counter;

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

while (str[pos] != '\0')
{

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
