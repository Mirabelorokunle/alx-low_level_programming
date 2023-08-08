#include "lists.h"

/**
 * listint_len - this program will return all elements of a linked list
 * @vari:  the linked list of the
 * Return: the number of nodes encountered during the operation
 */
size_t listint_len(const listint_t *vari)
{

	size_t pntNumb = 0;

	while (vari)
	{
		pntNumb++;
		vari = (*vari).next;
	}





	return (pntNumb);
}
