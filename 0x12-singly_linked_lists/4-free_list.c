#include "lists.h"
#include <stddef.h>
/**
 * free_list - frees a linked list
 * @head: the beginning of the list
 */
void free_list(list_t *head)
{
	free_list(head->next);
	free(head->str);
	free(head);
}