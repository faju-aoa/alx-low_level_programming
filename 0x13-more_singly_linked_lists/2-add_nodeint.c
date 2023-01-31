#include "lists.h"
/**
 * add_nodeint - singly linked list
 * @head: head
 * @n: integer
 * Return: the number of elements in a linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *current;
current = malloc(sizeof(listint_t));
if (current == NULL)
{
return (NULL);
}
current->n = n;
current->next = *head;
*head = current;
return (*head);
}
