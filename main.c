#include "monty.h"

int main(int ac, char **av)
{
    if (ac != 2 && av)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    return (0);
}
