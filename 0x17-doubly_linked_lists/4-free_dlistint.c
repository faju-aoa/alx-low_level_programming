#include "lists.h"

/**
 * free_dlistint - delete node
 * @head: head of the node
 * Return - return void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp = head;
head = head->next;
free(temp);
temp = NULL;
head->prev = NULL;
}
