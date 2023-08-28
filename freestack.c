#include "monty.h"

void freestack(stack_t *stack)
{
    stack_t *currentNode;
    while (stack->prev != NULL)
    {
        stack = stack->prev;
    }
    while (stack != NULL)
    {
        currentNode = stack;
        stack = stack->next;
        free(currentNode);
    }
}
