#include "monty.h"
/**
 * f_stack - Sets a value to the bus.lifi variable
 * @head: Double pointer to the head of the stack
 * @counter: Line number counter for potential error messages
 *
 * Description: Sets a value (0 in this case) to the bus.lifi variable.
 * This function doesn't perform stack operations but potentially initializes
 * a variable named bus.lifi.
 *
 * @head: Pointer to the head pointer of the stack (unused in this function)
 * @counter: Line number (unused in this function)
 */
void f_stack(stack_t **head, unsigned int counter)
{
(void)head;
(void)counter;
bus.lifi = 0;
}
