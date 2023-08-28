#include "monty.h"

/**
 * isvalidcommand - checks if command is in the approved list
 * @allcommands: the list of all commands
 * @command: the command sent in
 * Return: returns 0 if approved, else returns 1
*/
int isvalidcommand(char *allcommands[], char *command)
{
int check;

check = 0;

while (allcommands[check] != NULL)
{
int isequal = strcmp(allcommands[check], command);
if (isequal == 0)
{
return (0);
}
check++;
}

return (1);
}
