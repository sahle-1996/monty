#include "monty.h"

/**
 * f_pop - Removes the top element of the stack
 * @head: Pointer to the head of the stack
 * @counter: Line number
 *
 * Description: This function removes the top element of the stack.
 * If the stack is empty, it prints an error message to stderr and exits
 * with EXIT_FAILURE.
 * Return: No return value
 */
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
