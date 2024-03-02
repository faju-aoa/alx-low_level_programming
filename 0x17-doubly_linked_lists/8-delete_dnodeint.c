#nclude "lists.h"

/**
 * delete_dnodeint_at_index - delete node base on index
 * @head: head of the node
 * @index: position to delete the node
 *
 * Return: return 1 if successfull or -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp1;
dlistint_t *temp2;
unsigned int count;
temp1 = *head;
if (temp1 != NULL)
{
while (temp1->prev != NULL)
temp1 = temp1->prev;
}
count = 0;
while (temp1 != NULL)
{
if (count == index)
{
if (count == 0)
{
*head = temp1->next;
if (*head != NULL)
(*head)->prev = NULL;
}
else
{
temp2->next = temp1->next;
if (temp1->next != NULL)
temp1->next->prev = temp2;
}
free(temp1);
return (1);
}
temp2 = temp1;
temp1 = temp1->next;
count++;
}
return (-1);
}
