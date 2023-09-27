#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The address of the node where the loop starts
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_ptr, *fast_ptr;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slow_ptr = head->next;
	fast_ptr = head->next->next;

	while (fast_ptr && fast_ptr->next)
	{
		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}
			return (slow_ptr);
		}

		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
	}

	return (NULL);
}
