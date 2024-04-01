#include "monty.h"

/**
 * f_pchar - Prints the character at the top of the stack
 * @head: Pointer to the head of the stack
 * @counter: Line number
 *
 * Description: This function prints the character at the top of the stack,
 * followed by a new line. If the stack is empty or the value is out of range,
 * it prints an error message to stderr and exits with EXIT_FAILURE.
 * Return: No return value
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
