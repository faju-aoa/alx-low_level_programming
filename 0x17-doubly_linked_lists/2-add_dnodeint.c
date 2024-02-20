#uinclude "lists.h"

/**
 * add_dnodeint - create an empty node
 * @head:head of the nodes
 * @n:data of the node
 * Return: head of the node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *h;
dlistint_t *temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
{
return (NULL);
}
temp->prev = NULL;
temp->n = n;
h = (*head);
temp->next = h;
(*head) = temp;
return (*head);
}
