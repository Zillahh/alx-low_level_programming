#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to a pointer to the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow_ptr, *fast_ptr, *temp;
	size_t size = 0;

	if (h == NULL || *h == NULL)
		return (0);

	slow_ptr = *h;
	fast_ptr = *h;

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		size++;

		if (slow_ptr == fast_ptr)
		{
			slow_ptr = *h;
			while (slow_ptr != fast_ptr)
			{
				temp = fast_ptr;
				fast_ptr = fast_ptr->next;
				free(temp);
			}

			*h = NULL;
			size++;

			return (size);
		}
	}

	slow_ptr = *h;
	while (slow_ptr)
	{
		temp = slow_ptr;
		slow_ptr = slow_ptr->next;
		free(temp);
		size++;
	}

	*h = NULL;

	return (size);
}

