#include "monty.h"

/**
 * removeStartSpaces - remove trailing spaces at start of line
 * @str: original line string
 * @newstr: destination string
 * Return: new string
*/
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

while (str[pos] != '\0' && str[pos] != '\n')
{
newstr[newpos] = str[pos];
newpos++;
pos++;
}
newstr[newpos] = '\0';

return (newstr);
}
