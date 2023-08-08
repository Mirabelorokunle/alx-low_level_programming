#include "lists.h"


/**
 * find_listint_loop - this program will find loops in a
 * linked list during execution
 * @head: linked list to search for
 * Return: either the address of the node to which the loop starts or NULL
 */


listint_t *find_listint_loop(listint_t *head)
{


	listint_t *fasterN = head;
	listint_t *fastN = head;

	if (head)

		while (fastN && fasterN && (*fasterN).next)
		{
			fasterN = (*(*fasterN).next).next;
			fastN = (*fastN).next;
			if (fasterN == fastN)
			{
				fastN = head;
				while (fastN != fasterN)
				{
					fastN = (*fastN).next;
					fasterN = (*fasterN).next;
				}
				return (fasterN);
			}
		}




	return (NULL);
}
