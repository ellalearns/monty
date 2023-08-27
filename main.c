#include "monty.h"

/**
 * main - main function to interpret monty files
 * @ac: number of arguments
 * @av: list of arguments
 * Return: integer 0 or exit failure
*/
int main(int ac, char **av)
{
    FILE *montyFile;
    size_t lineSize = 1024;
    char *line = NULL;
    stack_t *mystack = NULL;
    int lineno = 0;

    line = malloc(sizeof(char) * 1024);

    if (ac != 2 && av)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    montyFile = fopen(av[1], "r");
    if (montyFile == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", av[1]);
        exit(EXIT_FAILURE);
    }

    while ((fgets(line, lineSize, montyFile)) != NULL)
    {
        int isrealcommand;
        int isint;

        char *allcommands[] = {"pall", "push", NULL};

        char *newstr = malloc(sizeof(char) * strlen(line));
        /*
        char *linestr = malloc(sizeof(char) * (strlen(line) + 1));
        */
        char *strone = malloc(sizeof(char) * (strlen(line) + 1));
        char *strtwo = malloc(sizeof(char) * (strlen(line) + 1));

        lineno++;


        newstr = removeStartSpaces(line, newstr);
        /*
        linestr = mystrcpy(newstr, linestr);
        */
        
        strone = firststr(newstr, strone);
        strtwo = secondString(newstr, strtwo);

        isrealcommand = isvalidcommand(allcommands, strone);
        if (isrealcommand != 0)
        {
            fprintf(stderr, "L%d: unknown instruction %s\n", lineno, strone);
            exit(EXIT_FAILURE);
        }

        isint = isinteger(strtwo);

        if (strcmp(allcommands[0], strone) == 0)
        {
            if (mystack != NULL)
            {
                pall(mystack);
            }
        }

        if (strcmp(allcommands[1], strone) == 0)
        {
            if (isint != 0)
            {
                fprintf(stderr, "L%d: usage: push integer\n", lineno);
                exit(EXIT_FAILURE);
            }
            push(&mystack, atoi(strtwo));
        }

        free(newstr);
        free(strone);
        free(strtwo);
    }

    fclose(montyFile);
    free(line);

    return (0);

}
