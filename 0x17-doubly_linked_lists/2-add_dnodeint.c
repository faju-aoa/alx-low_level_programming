#uinclude "lists.h"

/**
 * add_dnodeint - create an empty node
 * @head:head of the nodes
 * @n:data of the node
 * Return: head of the node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
{
return (NULL);
}
temp->prev = NULL;
temp->n = n;
temp->next = *head;
(*head) = temp;
return (*head);
}
