#include "monty.h"

/**
  * rotr - rotates the stack to the bottom.
  * @stack: double pointer to stack.
  * @line_number: number of lins.
  *
  * Return: void.
  */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *last = *stack;

	(void)line_number;
	if (*stack == NULL || (*stack)->next == NULL)
		return;

       	while (last->next != NULL) /* to get to the last element of the list */
		last = last->next;
	last->next = *stack;
	(*stack)->prev = last;
	(*stack) = last;
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}

/**
  * rotl - rotates the stack to Top.
  * @stack: double pointer to stack.
  * @line_number: number of lines.
  *
  * The top element of the stack becomes the last one, and the second top,
  * element of the stack becomes the first one.
  * rotl never fails.
  * Return: void.
  */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *last = *stack, *b_last;

	(void)(line_number);
	if (*stack == NULL || (*stack)->next == NULL)
		return;
	b_last = (*stack)->next;
	b_last->prev = NULL;
	while (last->next != NULL)
		last = last->next;
	last->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = last;
	(*stack) = b_last;
}
