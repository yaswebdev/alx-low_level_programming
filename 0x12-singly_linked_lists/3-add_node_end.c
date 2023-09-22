#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node_end - adds a new node .
* @head: double pointer to the list_t list in the node .
* @str: string to put in new node .
* Return: address the new element or NULL if it fail .
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newest;
list_t *tp = *head;
unsigned int len = 0;

while (str[len])
len++;
newest = malloc(sizeof(list_t));
if (!newest)
return (NULL);
newest->str = strdup(str);
newest->len = len;
newest->next = NULL;
if (*head == NULL)
{
*head = newest;
return (newest);
}
while (tp->next)
tp = tp->next;
tp->next = newest;
return (newest);
}
