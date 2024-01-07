#include "monty.h"
/**
 * f_pop - Removes the top element of the stack
 * @head: Double pointer to the head of the stack
 * @counter: Line number counter for potential error messages
 *
 * Description: Removes the top element of the stack. If the stack is empty,
 * it prints an error message "L<counter>: can't pop an empty stack" to stderr
 * and exits with EXIT_FAILURE. This function assumes a doubly linked list
 * representation of the stack.
 *
 * @head: Pointer to the head pointer of the stack
 * @counter: Line number from the bytecode file for error tracking
 */
void f_pop(stack_t **head, unsigned int counter)
{
stack_t *h;

if (*head == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
*head = h->next;
free(h);
}
