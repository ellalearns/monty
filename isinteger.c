#include "monty.h"

/**
 * isinteger - checks if a string can be converted to int
 * @str: the string
 * Return: returns 0 if it can be converted, else returns 1
*/
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
