#include "monty.h"

int nodes(stack_t *stacknode)
{
    int nodesno = 0;

    if (stacknode == NULL)
    {
        return (0);
    }

    while (stacknode->prev != NULL)
    {
        stacknode = stacknode->prev;
    }

    while (stacknode != NULL)
    {
        stacknode = stacknode->next;
        nodesno++;
    }

    return (nodesno);

}
