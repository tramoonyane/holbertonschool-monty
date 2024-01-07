#include "monty.h"
/**
 * f_add - Adds the top two elements of the stack
 * @head: Double pointer to the head of the stack
 * @counter: Line number counter for potential error messages
 * Description: Adds the top two elements of the stack and
 * stores the result in
 * the second node from the top. If the stack contains less than two elements,
 * it prints an error message "L<counter>: can't add,
 * stack too short" to stderr
 * and exits with EXIT_FAILURE. This function assumes a doubly linked list
 * representation of the stack.
 *
 * @head: Pointer to the head pointer of the stack
 * @counter: Line number from the bytecode file for error tracking
 */
void f_add(stack_t **head, unsigned int counter)
{
stack_t *h;
int len = 0, aux;

h = *head;
while (h)
{
h = h->next;
len++;
}
if (len < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
aux = h->n + h->next->n;
h->next->n = aux;
*head = h->next;
free(h);
}
