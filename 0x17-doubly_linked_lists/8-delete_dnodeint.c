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
dlistint_t *curr1;
dlistint_t *curr2;
unsigned int count;
curr1 = *head;
if (curr1 != NULL)
while (curr1->prev != NULL)
{
curr1 = curr1->prev;
}
count = 0;
while (curr1 != NULL)
{
if (count == index)
{
if (count == 0)
{
*head = curr1->next;
if (*head != NULL)
(*head)->prev = NULL;
}
else
{
curr2->next = curr1->next;
if (curr1->next != NULL)
curr1->next->prev = curr2;
}
free(curr1);
return (1);
}
curr2 = curr1;
curr1 = curr1->next;
count++;
}
return (-1);
}
