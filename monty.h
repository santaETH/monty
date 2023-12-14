#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

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

char *_strchr_(const char *, int);
char *_strstr_(const char *, const char *);
int _readfile_(char **, int);
int _readline_(char *);
char *_command_(const char *);
int _value_(const char *);
int _exe_(const char *, stack_t **);

stack_t *push(stack_t **, unsigned int);
stack_t *pall(stack_t **, unsigned int);
stack_t *free_struct(stack_t *);
void fix_head(stack_t *);

#endif /*MONTY_H*/
