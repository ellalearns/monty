#include "monty.h"

/**
 * firststr - gets the first part of a string before a space
 * @str: the string
 * @deststr: the destination str
 * Return: the destination str
*/
char *firststr(char *str, char *deststr)
{
int pos = 0;
int counter = 0;

while (str[pos] != ' ' && str[pos] != '\0')
{
pos++;
}

while (counter < pos)
{
deststr[counter] = str[counter];
counter++;
}

deststr[counter] = '\0';

return (deststr);
}
