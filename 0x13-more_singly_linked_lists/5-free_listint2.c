#include "lists.h"
/**
 * free_listint2 - free singly linked list
 * @head: first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *first;
if (first == head)
{
return;
}
while (first != NULL)
{
first = (*head)->next;
free(*head);
*head = first;
}
}
