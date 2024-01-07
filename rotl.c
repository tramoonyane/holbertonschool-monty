#include "monty.h"
/**
 * f_rotl - Rotates the stack to the top
 * @head: Double pointer to the head of the stack
 * @counter: Line number counter for potential error messages (unused)
 *
 * Description: Rotates the stack to the top, placing the bottom element
 * at the top of the stack. If the stack contains fewer than two elements
 * or is empty, it returns without performing any rotation.
 * This function assumes a doubly linked list representation of the stack.
 *
 * @head: Pointer to the head pointer of the stack
 * @counter: Line number (unused in this function)
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
stack_t *tmp = *head, *aux;

if (*head == NULL || (*head)->next == NULL)
{
return;
}
aux = (*head)->next;
aux->prev = NULL;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = *head;
(*head)->next = NULL;
(*head)->prev = tmp;
(*head) = aux;
}
