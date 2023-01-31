#include "lists.h"
/**
 * free_listint - free singly linked list
 * @head: first node
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *first, *second;
first = head;
while (first != NULL)
{
second = first->next;
free(first);
first = second;
}
}
