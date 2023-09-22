#include <stdlib.h>
#include "lists.h"
/**
* free_list - free a linked list .
* @head: list_t list to be free .
*/
void free_list(list_t *head)
{
list_t *tp;
while (head)
{
tp = head->next;
free(head->str);
free(head);
head = tp;
}
}
