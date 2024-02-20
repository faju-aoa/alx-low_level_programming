#include "lists.h"

/**
 * dlistint_len - prints all the elements
 * @h: head of the node
 * Return: return length of the node
 */
size_t dlistint_len(const dlistint_t *h)
{
int lenght = 0;
while (h != NULL)
{
lenght++;
h = h->next;
}
return (lenght);
}
