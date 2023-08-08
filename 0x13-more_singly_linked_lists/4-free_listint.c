#include "lists.h"


/**
 * free_listint - this function will frees a linked list(de-allocate it)
 * @head: the listint_t is the list to be freed(de-allocate)
 */



void free_listint(listint_t *head)
{


	listint_t *tmpory;



	while (head)
	{
		tmpory = (*head).next;
		free(head);
		head = tmpory;
	}
}
