#include "monty.h"
/**
 * addnode - Adds a node to the top of the stack
 * @head: Double pointer to the head of the stack
 * @n: Value to be added to the stack
 *
 * Description: Creates a new node with the given value
 * @n and adds it to the top
 * of the stack. If memory allocation fails for the new node,
 * it prints an error
 * message "Error" to stdout and exits with status 0.
 *
 * @head: Pointer to the head pointer of the stack
 * @n: Value to be added to the stack
 */
void addnode(stack_t **head, int n)
{
stack_t *new_node, *aux;

aux = *head;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
printf("Error\n");
exit(0);
}
if (aux)
aux->prev = new_node;
new_node->n = n;
new_node->next = *head;
new_node->prev = NULL;
*head = new_node;
}
