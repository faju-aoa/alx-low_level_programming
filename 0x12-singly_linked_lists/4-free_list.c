#include "lists.h"
/**
 * free_list - delete singly linked list node
 * @head: head - head of the node
 *
 *Return void
 */
void free_list(list_t *head)
{
if (head == NULL)
{
printf("link is empty");
}
while (head != NULL)
{
list_t *temp = head;
head = head->next;
free(temp->str);
free(temp);
}
free(head);
}
