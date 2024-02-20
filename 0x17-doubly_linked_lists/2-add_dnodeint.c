#uinclude "lists.h"

/**
 * add_dnodeint - create an empty node
 * @head:head of the nodes
 * @n:data of the node
 * Return: head of the node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
listint_t *temp, *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->prev = NULL;
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
new_node->next = NULL;
*head = new_node;
return (*head);
}
temp = (*head) ;
new_node->next = temp;
temp->prev = new_node;
(*head)=new_node;
return (new_node);
}
