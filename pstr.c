#include "monty.h"

/**
 * f_pstr - Prints the string starting at the top of the stack
 * @head: Pointer to the head of the stack
 * @counter: Line number
 *
 * Description: This function prints the string starting at the top
 * of the stack, followed by a new line. It stops printing when it
 * reaches a non-printable character or the stack is empty.
 * Return: No return value
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void) counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
