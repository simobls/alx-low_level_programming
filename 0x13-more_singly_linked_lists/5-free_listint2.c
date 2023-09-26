#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
	head = NULL;
}