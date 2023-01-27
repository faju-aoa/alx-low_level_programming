#include "lists.h"
/**
 * print_list - prints all the elements of a list
 * @h:pointer to the list
 *
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
const list_t *node = h;
size_t count = 0;

while (node != NULL)
{
if (node->str != NULL)
{
printf("[%d] %s\n", node->len, node->str);
}
else
{
printf("[0] (nil)\n");
}
count += 1;
node = node->next;
}
return (count);
}
