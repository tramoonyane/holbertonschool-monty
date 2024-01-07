#include "monty.h"
/**
 * f_pint - Prints the value at the top of the stack
 * @head: Double pointer to the head of the stack
 * @counter: Line number counter for potential error messages
 *
 * Description: Prints the value at the top of the stack.
 * If the stack is empty,
 * it prints an error message "L<counter>: can't pint,
 * stack empty" to stderr
 * and exits with EXIT_FAILURE.
 * This function assumes a doubly linked list
 * representation of the stack.
 *
 * @head: Pointer to the head pointer of the stack
 * @counter: Line number from the bytecode file for error tracking
 */
void f_pint(stack_t **head, unsigned int counter)
{
if (*head == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
printf("%d\n", (*head)->n);
}
