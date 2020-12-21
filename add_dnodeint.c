#include "monty.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: a pointer to the pointer to the linked list
 * @n: an integer
 *
 * Return: the address of the new element, or NULL if it failed
 */
stack_t *add_dnodeint(stack_t **head, const int n)
{
	stack_t *temp_after, *newnode;

	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (*head == NULL)
	{
		newnode->next = NULL;
		*head = newnode;
		return (*head);
	}

	temp_after = *head;
	newnode->next = temp_after;
	temp_after->prev = newnode;
	*head = newnode;

	return (newnode);
}
