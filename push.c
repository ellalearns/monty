#include "monty.h"

stack_t *push(stack_t **stack, const int n)
{
    stack_t *newNode;
    stack_t *currentNode;

    currentNode = *stack;

    newNode = malloc(sizeof(stack_t));
    if (newNode == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    newNode->n = n;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (*stack == NULL)
    {
        *stack = newNode;
    }

    else
    {
        while (currentNode->prev != NULL)
        {
            currentNode = currentNode->prev;
        }

        currentNode->prev = newNode;
        newNode->next = currentNode;
    }

    return (newNode);
    
}
