#include <stdio.h>
#include "monty.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

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
        fprintf(stdout, "%s", line);
    }

    fclose(montyFile);
    free(line);

    return (0);

}
