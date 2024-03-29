#include "lists.h"
/**
 * print_listint - singly linked list
 * @h: head
 * Return: number of list of node
 */
size_t print_listint(const listint_t *h)
{
size_t count = 0;
const listint_t *current = h;
while (current != NULL)
{
printf("%d\n", current->n);
count = count + 1;
current = current->next;
}
return (count);
}
