#include "monty.h"

/**
 * f_rotl - Rotates the stack to the top
 * @head: Pointer to the stack head
 * @counter: Line number (unused)
 *
 * Description: This function rotates the stack to the top, moving the
 * first element to the last position.
 * Return: No return value
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
