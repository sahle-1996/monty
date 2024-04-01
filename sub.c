#include "monty.h"

/**
 * f_sub - Subtracts the top element of the stack from the second top element
 * @head: Pointer to the stack head
 * @counter: Line number
 *
 * Description: This function subtracts the top element of the stack from the
 * second top element, removes the top element, and updates the stack.
 * Return: No return value
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int nodes, result;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;

	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	aux = *head;
	result = aux->next->n - aux->n;
	aux->next->n = result;
	*head = aux->next;
	free(aux);
}
