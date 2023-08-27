#include "monty.h"

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
