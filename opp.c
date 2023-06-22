#include "monty.h"
/**
 *
 * m_pp - prints the top
 * @head: stack head
 * @counter: linenumber
 * Return: no return
 */
void m_pp(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		mm_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
