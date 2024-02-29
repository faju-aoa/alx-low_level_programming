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
unsigned int count = 0;
dlistint_t *ptr, *temp = NULL;
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
temp->prev = NULL;
ptr = (*h);
if (idx == 0)
{
temp = add_dnodeint(h, n);
return (temp);
}
while (ptr)
{
if ((ptr->next == NULL) && count == idx - 1)
{
temp = add_dnodeint_end(h, n);
return (temp);
}
else if ((idx - 1) == count)
{
temp2 = ptr->next;
ptr->next = temp;
temp2->prev = temp;
temp->prev = ptr;
temp->next = temp2;
return (ptr);
}
count++;
ptr = ptr->next;
}
}
