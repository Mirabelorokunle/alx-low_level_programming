#include "lists.h"


/**
 * get_nodeint_at_index - to get the node at a specific index
 * location within a linked list
 * @head: this is the first node encountered in the linked
 * list during execution
 * @index: the index of the node we wish to get
 * Return: either a pointer to the node we wish to get or NULL
 */



listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{


	listint_t *tmpory = head;

	unsigned int pntNumb = 0;

	while (pntNumb < index && tmpory)
	{
		tmpory = (*tmpory).next;
		pntNumb++;
	}

	return (tmpory);
}
