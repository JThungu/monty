#include "monty.h"
/**
 * mm_stack - frees a doubly linked list
 * @head: head
 */
void mm_stack(stack_t *head)
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
