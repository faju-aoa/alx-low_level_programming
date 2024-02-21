#include "lists.h"

/**
 * add_dnodeint_end - create an empty node
 * @head:head of the nodes
 * @n:data of the node
 * Return: new of the node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *ptr;
dlistint_t *temp;
temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
{
return (NULL);
}
temp->n = n;
temp->next = NULL;
ptr = (*head);
if (ptr != NULL)
{
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = temp;
}
else
{
(*head) = temp;
}
temp->prev = ptr;
return (ptr);
}
