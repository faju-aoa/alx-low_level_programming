#include "lists.h"
/**
 * listint_len - singly linked list
 * @h: head
 * Return: the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;
struct listint_t *current = h;
while (current != NULL)
{
count = count + 1;
current = current->next;
}
return (count);
}
