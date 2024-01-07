#include "monty.h"
/**
 * f_pstr - Prints characters from the stack until a non-printable character
 * @head: Double pointer to the head of the stack
 * @counter: Line number counter for potential error messages (unused)
 *
 * Description: Prints characters from the stack as long as the values are
 * in the printable ASCII range (from 1 to 127). Stops printing when a
 * non-printable character or zero is encountered.
 * This function assumes a doubly linked list representation of the stack.
 *
 * @head: Pointer to the head pointer of the stack
 * @counter: Line number (unused in this function)
 */
void f_pstr(stack_t **head, unsigned int counter)
{
stack_t *h;
(void)counter;

h = *head;
while (h)
{
if (h->n > 127 || h->n <= 0)
{
break;
}
printf("%c", h->n);
h = h->next;
}
printf("\n");
}
