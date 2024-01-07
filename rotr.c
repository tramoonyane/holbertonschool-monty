#include "monty.h"
/**
 * f_rotr - Rotates the stack to the bottom
 * @head: Double pointer to the head of the stack
 * @counter: Line number counter for potential error messages (unused)
 *
 * Description: Rotates the stack to the bottom, placing the top element
 * at the bottom of the stack. If the stack contains fewer than two elements
 * or is empty, it returns without performing any rotation.
 * This function assumes a doubly linked list representation of the stack.
 *
 * @head: Pointer to the head pointer of the stack
 * @counter: Line number (unused in this function)
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
stack_t *copy;

copy = *head;
if (*head == NULL || (*head)->next == NULL)
{
return;
}
while (copy->next)
{
copy = copy->next;
}
copy->next = *head;
copy->prev->next = NULL;
copy->prev = NULL;
(*head)->prev = copy;
(*head) = copy;
}
