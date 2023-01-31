#include "lists.h"
/**
 * pop_listint - pop singly linked list
 * @head: head
 * Return: data
 */
int pop_listint(listint_t **head)
{
listint_t *first;
int p;
if (*head == NULL)
return (0);
first = *head;
*head = first->next;
p = first->n;
free(first);
return (p);
}
