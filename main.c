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
        /*
        char *secstr;
        char *allcommands[] = {"push", "pall"};
        char *command[] = {NULL, NULL};
        */

        char *newstr = malloc(sizeof(char) * strlen(line));
        newstr = removeStartSpaces(line, newstr);

        fprintf(stdout, "%s", newstr);
    }

    fclose(montyFile);
    free(line);

    return (0);

}
