#include "lists.h"

/**
 * add_dnodeint_end - create an empty node
 * @head:head of the nodes
 * @n:data of the node
 * Return: new of the node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
if (head == NULL)
{
return (NULL);
}
dlistint_t *temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
{
return (NULL);
}
if (*head == NULL)
{
temp->prev = NULL;
temp->n = n;
temp->next = NULL;
(*head) = temp;
return (*head);
}
temp->prev = NULL;
temp->n = n;
temp->next = NULL;
dlistint_t *ptr = NULL;
ptr = (*head);
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = temp;
temp->prev = ptr;
return (*head);
}
