#include "monty.h"

/**
 * pint - prints topmost node of a stack
 * @stacknode: a node in stack
 * @lineno: line no of monty file currently at
 * Return: int
*/
int pint(stack_t *stacknode, int lineno)
{
int nodes = 0;
stack_t *currentNode;

if (stacknode == NULL)
{
fprintf(stderr, "L%d: can't pint, stack empty", lineno);
exit(EXIT_FAILURE);
}

currentNode = stacknode;

while (currentNode->prev != NULL)
{
currentNode = currentNode->prev;
}

fprintf(stdout, "%d\n", currentNode->n);

return (nodes);
}
