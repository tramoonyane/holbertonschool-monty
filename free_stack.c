#include "monty.h"
/**
 * free_stack - Frees a doubly linked list representing a stack
 * @head: Pointer to the head of the stack
 *
 * Description: Frees all the nodes in a doubly linked list
 * representing a stack. This function releases the memory
 * occupied by each node in the stack.
 *
 * @head: Pointer to the head of the stack
 */
void free_stack(stack_t *head)
{
stack_t *aux;

aux = head;
while (head)
{
aux = head->next;
free(head);
head = aux;
}
}
