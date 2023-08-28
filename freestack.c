#include "monty.h"

/**
 * freestack - frees a doubly linked list
 * @stack: the stack to free
*/
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
