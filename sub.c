#include "monty.h"
/**
 * f_sub - Subtracts the top element of the stack from the second top element
 * @head: Double pointer to the head of the stack
 * @counter: Line number counter for error messages
 *
 * Description: Subtracts the top element of the stack
 * from the second top element.
 * If the stack contains less than two elements,
 * prints an error message
 * "L<counter>: can't sub, stack too short"
 * to stderr and exits with EXIT_FAILURE.
 * This function assumes a doubly linked list representation of the stack.
 *
 * @head: Pointer to the head pointer of the stack
 * @counter: Line number from the bytecode file for error tracking
 */
void f_sub(stack_t **head, unsigned int counter)
{
stack_t *aux;
int sus, nodes;

aux = *head;
for (nodes = 0; aux != NULL; nodes++)
aux = aux->next;
if (nodes < 2)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
aux = *head;
sus = aux->next->n - aux->n;
aux->next->n = sus;
*head = aux->next;
free(aux);
}
