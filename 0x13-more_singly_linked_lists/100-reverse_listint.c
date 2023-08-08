#include "lists.h"

/**
 * reverse_listint - this program will reverse a linked list during execution
 * @head: a pointer to the first node item in the list provided
 * Return: a pointer to the first node item in the new list provided
 */


listint_t *reverse_listint(listint_t **head)
{

	listint_t *afterVar = NULL;
	listint_t *beforeVar = NULL;


	while (*head)
	{
		afterVar = (**head).next;

		(**head).next = beforeVar;

		beforeVar = *head;

		*head = afterVar;
	}


	*head = beforeVar;

	return (*head);
}
