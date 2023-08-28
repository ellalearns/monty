#include "monty.h"

/**
 * mystrcpy - copies a string into another without newline character or $
 * @str: the string
 * @newstr: the new string
 * Return: new string
*/
char *mystrcpy(char *str, char *newstr)
{
int counter;
counter = 0;
while (str[counter] != '$' && str[counter] != '\n')
{
newstr[counter] = str[counter];
counter++;
}
newstr[counter] = '\0';

return (newstr);
}
