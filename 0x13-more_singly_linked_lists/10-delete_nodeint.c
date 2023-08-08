#include "lists.h"



/**
 * delete_nodeint_at_index - this program will delete a node in
 * a linked list at a specific index during execution
 * @head: this points to the first item in the list used
 * @index: represents the index of the node to deleted during execution
 * Return: either 1 for Success or -1  for Fail
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int i = 0;
	listint_t *state = NULL;
	listint_t *tmpory = *head;

	if (*head == NULL || index == 0)
	{
		if (*head == NULL)
			return (-1);

		if (index == 0)
		{
			*head = (**head).next;
			free(tmpory);
			return (1);
		}
	}

	else
	{
		while (i < index - 1)
		{
			if (tmpory || ((*tmpory).next))
				tmpory = (*tmpory).next;

			return (-1);
			i++;
		}


		state = (*tmpory).next;
		(*tmpory).next = (*state).next;
		free(state);
	}

	return (1);
}
