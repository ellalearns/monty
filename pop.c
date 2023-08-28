#include "monty.h"

int pop(stack_t *stacknode)
{
    int nodes = 0;

    while (stacknode->prev != NULL)
    {
        stacknode = stacknode->prev;
    }

    if (stacknode->next != NULL)
    {
        stacknode = stacknode->next;
        stacknode->prev = NULL;
    }
    
    return (nodes);
}
