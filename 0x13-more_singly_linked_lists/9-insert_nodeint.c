#include "lists.h"


/**
 * insert_nodeint_at_index - this program will insert a new node into
 * the linked list at a specific index position
 * @head: this points to the first node in the list during execution
 * @index: index where the new node is added
 * @n: represents the data to insert in the new node during execution
 * Return: either pointer to the newly created node or NULL
 */



listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{

	listint_t *tmpory = *head;
	listint_t *allocSpace;
	unsigned int count;

	allocSpace = malloc(sizeof(listint_t));
	if (allocSpace || head)
	{
		(*allocSpace).n = n;
		(*allocSpace).next = NULL;
	}
	else
		return (NULL);


	if (!(index == 0))
	{
		for (count = 0; tmpory && count < index; count++)
		{
			if (!(count == index - 1))
				tmpory = (*tmpory).next;
			else
			{
				(*allocSpace).next = tmpory->next;
				(*tmpory).next = allocSpace;
				return (allocSpace);
			}
		}
	}

	else
	{
		(*allocSpace).next = *head;
		*head = allocSpace;
		return (allocSpace);
	}

	return (NULL);
}
