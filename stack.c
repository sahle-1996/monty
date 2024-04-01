#include "monty.h"

/**
 * f_stack - Switches to stack mode
 * @head: Pointer to the stack head
 * @counter: Line number (unused)
 *
 * Description: This function switches the mode to stack mode.
 * Return: No return value
 */
void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
