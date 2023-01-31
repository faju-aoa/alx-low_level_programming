#include "lists.h"
/**
 * sum_listint - pop singly linked list
 * @head: first node
 * Return: data
 */
int sum_listint(listint_t *head)
{
int total_sum = 0;
while (head != NULL)
{
total_sum += head->n;
head = head->next;
}
return (total_sum);
}
