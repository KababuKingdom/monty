#include "monty.h"

/**
 * rotr - rotates the stack to the bottom
 * @stack: pointer to the top of the stack
 * @line_number: the line number in the file
 *
 * Return: void
 */
void rotr(stack_t **stack, unsigned int line_number)
{
    stack_t *temp, *last;

    (void)line_number;
    /* check if stack is empty or contains only one element */
    if (!(*stack) || !(*stack)->next)
        return;

    /* get the last stack */
    last = *stack;
    while (last->next)
        last = last->next;

    /* remove the last element */
    temp = last;
    last = last->prev;
    last->next = NULL;
    temp->prev = NULL;

    /* make the last element the new head of the stack */
    temp->next = *stack;
    (*stack)->prev = temp;
    *stack = temp;
}

#include "monty.h"

/**
 * rotl - rotates the stack to the top
 * @stack: pointer to the top of the stack
 * @line_number: the line number in the file
 *
 * Return: void
 */
void rotl(stack_t **stack, unsigned int line_number)
{
    stack_t *temp, *last;

    (void)line_number;
    /* check if stack is empty or contains only one element */
    if (!(*stack) || !(*stack)->next)
        return;

    /* get the last stack */
    last = *stack;
    while (tail->next)
        last = last->next;

    /* remove the head of the stack */
    temp = *stack;
    *stack = (*stack)->next;
    (*stack)->prev = NULL;
    temp->next = NULL;

    /* make the head element the new tail of the stack */
    temp->prev = last;
    last->next = temp;
}
