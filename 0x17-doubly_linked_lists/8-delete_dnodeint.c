#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node base on index
 * @head: head of the node
 * @index: position to delete the node
 *
 * Return: return 1 if successfull or -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *curr;
unsigned int count;
if (*head == NULL)
return (-1);
curr = *head;
if (index == 0)
{
*head = curr->next;
if (curr->next != NULL)
{
curr->next->prev = NULL;
}
free(curr);
return (1);
}
for (count = 0; curr != NULL && count < index - 1 ; count++)
{
curr = curr->next;
}
if (curr == NULL || curr->next == NULL)
{
return (-1);
}
if (curr->next->next != NULL)
{
curr->next = curr->next->next;
free(curr->next->prev);
curr->next->prev = curr;
return (1);
}
else
{
free(curr->next);
curr->next = NULL;
return (1);
}
return (-1);
}
}
