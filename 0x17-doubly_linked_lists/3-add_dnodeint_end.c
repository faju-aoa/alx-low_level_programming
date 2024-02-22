#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head:head of the nodes
 * @n:data of the node
 * Return: new of the node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp;
dlistint_t *new_node;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
temp = (*head);
if (temp != NULL)
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
}
else
{
(*head) = new_node;
}
new_node->prev = temp;
return (temp);
}
