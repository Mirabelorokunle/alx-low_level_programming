#include "lists.h"
#include <stdio.h>


size_t print_listint_safe(const listint_t *head);
size_t fxn_that_loop_listint_for_length(const listint_t *head);



/**
 * print_listint_safe - this part of the program will Print the
 * listint_t list safely.
 * @head: points to the head of the listint_t list.
 * Return: num of nodes in the list.
 */


size_t print_listint_safe(const listint_t *head)
{

	size_t numOfNodes, indexNum = 0;

	numOfNodes = fxn_that_loop_listint_for_length(head);


	if (numOfNodes != 0)
	{
		while (indexNum < numOfNodes)
		{
			printf("[%p] %d\n", (void *)head, (*head).n);
			head = (*head).next;
			indexNum++;
		}

		printf("-> [%p] %d\n", (void *)head, (*head).n);
	}

	else
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, (*head).n);
			head = (*head).next;
			numOfNodes++;
		}
	}

	return (numOfNodes);
}



/**
 * fxn_that_loop_listint_for_length - this part of the program
 * will counts the numbers of all unique nodes
 * @head: points to the head of the listint_t we wish to check.
 * Return: either 0 If list not looped or the number of unique
 * nodes in the list
 */


size_t fxn_that_loop_listint_for_length(const listint_t *head)
{
	const listint_t *anime, *singuAnim;
	size_t numOfNodes = 1;

	if (!(head == NULL || (*head).next == NULL))
	{
		anime = (*head).next;
		singuAnim = (*((*head).next)).next;

		while (singuAnim)
		{
			if (anime == singuAnim)
			{
				anime = head;
				while (anime != singuAnim)
				{
					numOfNodes++;
					anime = (*anime).next;
					singuAnim = (*singuAnim).next;
				}

				anime = (*anime).next;
				while (anime != singuAnim)
				{
					numOfNodes++;
					anime = (*anime).next;
				}

				return (numOfNodes);
			}

			anime = (*anime).next;
			singuAnim = (*((*singuAnim).next)).next;
		}
	}


	return (0);
}
