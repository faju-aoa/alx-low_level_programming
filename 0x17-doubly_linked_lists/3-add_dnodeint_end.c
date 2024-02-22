#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head:head of the nodes
 * @n:data of the node
 * Return: new of the node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *ptr;
dlistint_t *temp;
if (head == NULL)
{
return (NULL);
}
temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
{
return (NULL);
}
temp->n = n;
temp->next = NULL;
if (*head == NULL)
{
temp->prev = NULL;
(*head) = temp;
return (*head);
}
ptr = NULL;
ptr = (*head);
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = temp;
temp->prev = ptr;
return (ptr);
}
