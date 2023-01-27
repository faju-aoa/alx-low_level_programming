#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* struct list_s -print list structure
* @str: string member
* @len: length of the string
* @next: point to the next node
*Return: the number of nodes
*/

typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;
size_t print_list(const list_t *h);


#endif
