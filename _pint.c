#include "monty.h"
/**
 * m_pint - prints the top
 *
 * @head: head
 * @counter: number
 * Return: no return
 */
void m_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		mm_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
