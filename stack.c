#include "monty.h"
/**
 * stack - sets the data structure to a stack (LIFO)
 * @stack: pointer to the top of the stack
 * @line_number: the line number in the file
 *
 * Return: void
 */
void stack(stack_t **stack, unsigned int line_number)
{
    (void)stack;
    (void)line_number;
    /* set global variable to indicate stack mode */
    argument = 0;
}

#include "monty.h"

/**
 * queue - sets the data structure to a queue (FIFO)
 * @stack: pointer to the top of the stack
 * @line_number: the line number in the file
 *
 * Return: void
 */
void queue(stack_t **stack, unsigned int line_number)
{
    stack_t *temp, *last;

    (void)line_number;
    /* set global variable to indicate queue mode */
    argument = 1;
    /* if stack is empty, return */
    if (!(*stack))
        return;
    /* make the last element as the first element */
    last = *stack;
    while (last->next)
        last = last->next;
    temp = last->prev;
    temp->next = NULL;
    last->prev = NULL;
    last->next = *stack;
    (*stack)->prev = last;
    *stack = last;
}
