#include "lists.h"
/**
 * print_dlistint - prints all the elements
 * @h: head of the node
 * Return: return pointer to the node
 */
size_t print_dlistint(const dlistint_t *h)
{
dlistint_t *ptr = NULL;
ptr = h;
while (ptr != NULL)
{
printf("%d\n", ptr->n);
ptr = ptr->next;
}
return (ptr);
}
