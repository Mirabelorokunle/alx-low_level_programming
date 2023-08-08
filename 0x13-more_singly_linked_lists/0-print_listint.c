#include "lists.h"

/**
 * print_listint - this program will printout all elements of a linked list
 * @vari: the linked list of the type - listint_t to print-
 *
 * Return: the number of nodes encountered during the operation
 */
size_t print_listint(const listint_t *vari)
{

	size_t pntNumb = 0;

	while (vari)
	{
		printf("%d\n", (*vari).n);
		pntNumb++;
		vari = (*vari).next;
	}



	return (pntNumb);
}
