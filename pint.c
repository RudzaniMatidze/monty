#include "monty.h"

/**
 * f_pint - prints the value at the top of the stack
 * @head: head of the stack
 * @counter: line number counter
 * Return: void
 */
void f_pint(stack_t **, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.content);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}
