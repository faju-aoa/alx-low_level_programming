#include "lists.h"
/**
 * get_nodeint_at_index - pop singly linked list
 * @head: first node
 * @index: position of the node
 * Return: data
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int p = 0;
if (head == NULL)
return (NULL);
for (p = 0; p < index; p++)
{
head = head->next;
if (head == NULL)
return (NULL);
}
return (head);
}
