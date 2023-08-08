#include "lists.h"

/**
 * sum_listint - this program calculates the sum of all
 * the data supplied in a listint_t list during execution
 * @head: represents the first node in the linked list
 * Return: the sum i.e result
 */


int sum_listint(listint_t *head)
{

	int pntNumb = 0;

	listint_t *tmpory = head;


	while (tmpory)
	{
		pntNumb += (*tmpory).n;
		tmpory = (*tmpory).next;
	}

	return (pntNumb);
}
