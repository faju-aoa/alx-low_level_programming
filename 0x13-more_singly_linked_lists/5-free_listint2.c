#include "lists.h"
/**
 * free_listint2 - free singly linked list
 * @head: first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *first;
if (head == NULL)
{
return;
}
while (*head != NULL)
{
first = (*head)->next;
free(*head);
*head = first;
}
}
