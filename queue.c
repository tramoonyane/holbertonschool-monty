#include "monty.h"
/**
 * f_queue - Sets a value to the bus.lifi variable
 * @head: Double pointer to the head of the stack (unused)
 * @counter: Line number counter for potential error messages (unused)
 *
 * Description: Sets a value (1 in this case) to the bus.lifi variable.
 * This function doesn't perform stack operations but potentially initializes
 * a variable named bus.lifi.
 *
 * @head: Pointer to the head pointer of the stack (unused)
 * @counter: Line number (unused)
 */
void f_queue(stack_t **head, unsigned int counter)
{
(void)head;
(void)counter;
bus.lifi = 1;
}

/**
 * addqueue - Adds an element to the end of the queue
 * @head: Double pointer to the head of the queue
 * @n: Value to be added to the queue
 *
 * Description: Adds an element with the value @n to the end of the queue.
 * If memory allocation for the new node fails,
 * it prints an error message "Error".
 * This function assumes a doubly linked list representation of the queue.
 *
 * @head: Pointer to the head pointer of the queue
 * @n: Value to be added to the queue
 */
void addqueue(stack_t **head, int n)
{
stack_t *new_node, *aux;

aux = *head;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
printf("Error\n");
}
new_node->n = n;
new_node->next = NULL;
if (aux)
{
while (aux->next)
aux = aux->next;
}
if (!aux)
{
*head = new_node;
new_node->prev = NULL;
}
else
{
aux->next = new_node;
new_node->prev = aux;
}
}
