#include "monty.h"

/**
 * f_pall - Prints all the elements of the stack
 * @head: Pointer to the head of the stack
 * @counter: Line number (not used)
 *
 * Description: This function prints all the elements of the stack,
 * starting from the top.
 * Return: No return value
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
