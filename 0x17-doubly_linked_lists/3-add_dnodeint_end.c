#include "lists.h"

/**
 * add_dnodeint_end - create an empty node
 * @head:head of the nodes
 * @n:data of the node
 * Return: new of the node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *ptr = NULL;
if (head == NULL)
{
return (NULL);
}
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
while (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}
ptr = (*head);
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = new_node;
new_node->prev = (ptr);
return (new_node);
}
