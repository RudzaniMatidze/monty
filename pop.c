#include "monty.h"

/**
 * f_pop - removes the top element of the stack
 * @head: the stack head
 * @counter: the counter line_number
 * Return: void
 */
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *k;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.counter);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	k = *head;
	*head = k->next;
	free(k);
}
