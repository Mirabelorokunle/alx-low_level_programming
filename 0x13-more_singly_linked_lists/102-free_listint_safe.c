#include "lists.h"

/**
 * free_listint_safe - this program will free a linked list during execution
 * @h: points to the first node in the linked list during execution
 * Return: will be the number of items in the freed list
 */
size_t free_listint_safe(listint_t **h)
{


	listint_t *tmpory;
	int numDV;

	size_t lenOfItms = 0;

	if (h || *h)
	{
		while (*h)
		{
			numDV = *h - (**h).next;
			if (numDV > 0)
			{
				tmpory = (**h).next;
				free(*h);
				*h = tmpory;
				lenOfItms++;
			}
			else
			{
				free(*h);
				*h = NULL;
				lenOfItms++;
				break;
			}
		}


		*h = NULL;

		return (lenOfItms);
	}
	return (0);


}
