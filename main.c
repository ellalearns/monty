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
    int no = 0;

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
        int poa = 1;


        char *allcommands[] = {"pall", "push", "pint", "pop", "nop", NULL};

        char *newstr = malloc(sizeof(char) * strlen(line));
        /*
        char *linestr = malloc(sizeof(char) * (strlen(line) + 1));
        */
        char *strone = malloc(sizeof(char) * (strlen(line) + 1));
        char *strtwo = malloc(sizeof(char) * (strlen(line) + 1));

        

/*
        no = nodes(mystack);
        */

        lineno++;

        newstr = removeStartSpaces(line, newstr);
        /*
        linestr = mystrcpy(newstr, linestr);
        */
        
        strone = firststr(newstr, strone);
        strtwo = secondString(newstr, strtwo);

        if (strone[0] == '\0')
        {
            continue;
        }

        isrealcommand = isvalidcommand(allcommands, strone);
        if (isrealcommand != 0)
        {
            fprintf(stderr, "L%d: unknown instruction %s\n", lineno, strone);
            exit(EXIT_FAILURE);
        }

        isint = isinteger(strtwo);

        if (strcmp(allcommands[0], strone) == 0)
        {
            if (mystack != NULL && no > 0)
            {
                pall(mystack);
            }
        }

        if (strcmp(allcommands[1], strone) == 0)
        {
            if (isint != 0 && (strtwo[0] < '0' || strtwo[0] > '9') && strtwo[0] != '-')
            {
                fprintf(stderr, "L%d: usage: push integer\n", lineno);
                exit(EXIT_FAILURE);
            }
            if (isint != 0 && strtwo[0] != '-')
            {
                fprintf(stderr, "L%d: usage: push integer\n", lineno);
                exit(EXIT_FAILURE);
            }
            push(&mystack, atoi(strtwo));
            no++;
        }

        if (strcmp(allcommands[2], strone) == 0)
        {
            pint(mystack, lineno);
        }

        if (strcmp(allcommands[3], strone) == 0)
        {
            if (no >= 1)
            {
                pop(mystack);
                no--;
                continue;
            }

            if (no < 1)
            {
                /*
                if (poa == 0)
                {
                    pop(mystack);
                    poa++;
                    printf("changed\n");
                    printf("poa: %d\n", poa);
                }
                */
                
                if (poa > 0)
                {
                    fprintf(stderr, "L%d: can't pop an empty stack\n", lineno);
                    exit(EXIT_FAILURE);
                }
                
            }
        }

        if (strcmp(allcommands[4], strone) == 0)
        {
            continue;
        }

        free(newstr);
        free(strone);
        free(strtwo);
    }

    fclose(montyFile);
    free(line);
    freestack(mystack);

    return (0);

}
