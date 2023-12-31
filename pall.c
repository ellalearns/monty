#include "monty.h"

/**
 * pall - prints contents of a stack
 * @stacknode: a node in stack
 * Return: int
*/
int pall(stack_t *stacknode)
{
int nodes = 0;
stack_t *currentNode;

currentNode = stacknode;

while (currentNode->prev != NULL)
{
currentNode = currentNode->prev;
}

while (currentNode != NULL)
{
fprintf(stdout, "%d\n", currentNode->n);
currentNode = currentNode->next;
nodes++;
}

return (nodes);
}
