#include "lists.h"

/**
 * add_nodeint - this will add a new node at the beginning
 * of any linked list provided
 * @head: points to the first node in the list being used
 * @n: data to insert in that new node
 *
 * Return: a pointer to the new node atfer operation or NULL
 * if the operation fails
 */


listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *allocSpace;



	allocSpace = malloc(sizeof(listint_t));

	if (allocSpace)
	{
		(*allocSpace).n = n;
		(*allocSpace).next = *head;
		*head = allocSpace;
	}
	else
	{
		return (NULL);
	}




	return (allocSpace);
}
