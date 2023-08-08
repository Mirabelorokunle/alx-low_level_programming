#include "lists.h"


/**
 * pop_listint - this program will delete the head-node of
 * a linked list supplied to it
 * @head: points to the first item in the linked list supplied
 *
 * Return: either the data found inside the item that was
 * deleted or 0 if the list is found to be empty
 */



int pop_listint(listint_t **head)
{

	listint_t *tmpory;
	int pntNumb;

	if (head || *head)
	{
		pntNumb = (**head).n;
		tmpory = (**head).next;
		free(*head);
		*head = tmpory;
	}
	else
		return (0);



	return (pntNumb);
}
