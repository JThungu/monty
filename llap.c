#include "monty.h"
/**
 * m_pll - prints the stack
 *
 * @head: head
 * @counter: non
 *
 * Return: no return
 */
void m_pll(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
