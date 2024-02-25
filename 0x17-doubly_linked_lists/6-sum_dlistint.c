#include "lists.h"

/**
 * sum_dlistint - sum of node data
 * @head: head of the node
 *
 * Return: return sum
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *ptr = NULL;
if (head == NULL)
{
return (0);
}
ptr = head;
while (ptr != NULL)
{
sum = sum + ptr->n;
ptr = ptr->next;
}
return (sum);
}
