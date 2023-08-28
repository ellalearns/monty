#include "monty.h"

int pint(stack_t *stacknode, int lineno)
{
    int nodes = 0;
    stack_t *currentNode;

    if (stacknode == NULL)
    {
        fprintf(stderr, "L%d: can't pint, stack empty", lineno);
    }

    currentNode = stacknode;

    while (currentNode->prev != NULL)
    {
        currentNode = currentNode->prev;
    }

    fprintf(stdout, "%d\n", currentNode->n);

    return (nodes);
}
