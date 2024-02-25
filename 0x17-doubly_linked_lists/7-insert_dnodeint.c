#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: head of the node
 * @idx: position to insert the new node
 * @n: data in the node
 * Return: retturn ptr
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *ptr = NULL;
dlistint_t *temp = NULL;
dlistint_t *temp2 = NULL;
if (*h == NULL)
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
if (*h == NULL)
{
temp->prev = NULL;
(*h) = temp;
return (*h);
}
ptr = (*h);
while (idx != 0)
{
if (idx < 0)
{
return (NULL);
}
ptr = ptr->next;
idx--;
}
temp2 = ptr->next;
ptr->next = temp;
temp2->prev = temp;
temp->prev = ptr;
temp->next = temp2;
return (ptr);
}
