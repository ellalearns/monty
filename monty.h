#ifndef monty_h
#define monty_h

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


char *removeStartSpaces(char *str, char *newstr);
char *firststr(char *str, char *deststr);
char *secondString(char *str, char *deststr);
char *mystrcpy(char *str, char *newstr);
int isvalidcommand(char *allcommands[], char *command);
int isinteger(char *str);

stack_t *push(stack_t **stack, const int n);
int pall(stack_t *stacknode);
void freestack(stack_t *stack);
int pint(stack_t *stacknode, int lineno);
int pop(stack_t *stacknode);


#endif
