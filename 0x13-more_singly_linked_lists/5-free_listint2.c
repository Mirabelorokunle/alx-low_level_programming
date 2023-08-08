#include "lists.h"


/**
 * free_listint2 - this program will free a linked list after execution
 * @head: points to the listint_t list that we wish to free
 */



void free_listint2(listint_t **head)
{


	listint_t *tmpory;

	if (!(head == NULL))
	{
		while (*head)
		{
			tmpory = (**head).next;
			free(*head);
			*head = tmpory;

		}
		*head = NULL;
	}
	else
		return;



}
