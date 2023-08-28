#include "monty.h"

/**
 * pop - remove topmost element of a stack
 * @stacknode: a node in stack
 * Return: int
*/
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
