#include "monty.h"

/**
 * free_stack - this frees a doubly linked list
 * @head: the head of the stack
 */
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{

		aux = head->next;
		free(head);
		head = aux;
	}
}
