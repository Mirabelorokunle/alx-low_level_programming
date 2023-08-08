#include "lists.h"

/**
 * add_nodeint_end - this will add a node to the end of the linked
 * list after the operation
 * @head: this is a pointer to the first item in the list supplied
 * @n: this is the data we want to insert in the new item
 *
 * Return: a pointer to the newly created node or returns NULL if
 * the operation fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{


	listint_t *tmpory = *head;
	listint_t *allocSpace;


	allocSpace = malloc(sizeof(listint_t));
	if (allocSpace)
	{
		(*allocSpace).n = n;
		(*allocSpace).next = NULL;
	}
	else
		return (NULL);



	if (*head == NULL)
	{
		*head = allocSpace;
		return (allocSpace);
	}


	while ((*tmpory).next)
		tmpory = (*tmpory).next;

	(*tmpory).next = allocSpace;


	return (allocSpace);
}
