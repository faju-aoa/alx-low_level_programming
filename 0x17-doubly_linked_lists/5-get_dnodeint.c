#include "lists.h"

/**
 * get_dnodeint_at_index - get the index of the node
 * @head: head of the node
 * @index: count of the node
 * Return: return ptr
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;
dlistint_t *ptr = NULL;
if (head == NULL)
{
return (NULL);
}
ptr = head;
while (count < index)
{
if (ptr->next == NULL)
{
return (ptr);
}
count++;
ptr = ptr->next;
}
return (ptr);
}
