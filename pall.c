#include "monty.h"
/**
 * f_pall - Prints all values in the stack
 * @head: Double pointer to the head of the stack
 * @counter: Line number counter for potential error messages (unused)
 *
 * Description: Prints all the values in the stack. If the stack is empty,
 * it returns without printing anything. This function assumes a doubly
 * linked list representation of the stack.
 *
 * @head: Pointer to the head pointer of the stack
 * @counter: Line number (unused in this function)
 */
void f_pall(stack_t **head, unsigned int counter)
{
stack_t *h;
(void)counter;

h = *head;
if (h == NULL)
return;
while (h)
{
printf("%d\n", h->n);
h = h->next;
}
}
