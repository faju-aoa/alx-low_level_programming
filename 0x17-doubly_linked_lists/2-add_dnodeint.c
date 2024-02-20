#uinclude "lists.h"

/**
 * add_dnodeint - create an empty node
 * @head:head of the nodes
 * @n:data of the node
 * Return: head of the node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
if (head == NULL)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;
*head = new_node;
if (new_node->next != NULL)
(*head)->prev = new_node;
return (new_node);
}
