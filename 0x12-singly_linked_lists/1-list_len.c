#include  "lists.h"
/**
 * list_list - prints all the elements of a list
 * @h:pointer to the list
 *
 *Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
size_t length = 0;
const list_t *current = h;
while (current)
{
length++;
current = current->next;
}
return (length);
}
