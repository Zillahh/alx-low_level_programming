#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * and sets head to NULL
 * @head: pointer to the head of the list
 * zilla_of_ai
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}

	*head = NULL;
}
