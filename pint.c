#include "monty.h"

/**
 * f_pint - Prints the value at the top of the stack
 * @head: Pointer to the head of the stack
 * @counter: Line number
 *
 * Description: This function prints the value at the top of the stack,
 * followed by a new line. If the stack is empty, it prints an error message
 * to stderr and exits with EXIT_FAILURE.
 * Return: No return value
 */
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
