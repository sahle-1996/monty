#include "monty.h"

/**
 * f_mul - Multiplies the top two elements of the stack
 * @head: Pointer to the head of the stack
 * @counter: Line number
 *
 * Description: This function multiplies the top two elements of the stack.
 * Return: No return value
 */
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
