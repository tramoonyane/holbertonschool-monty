# Monty - Stack Manipulation Language Interpreter

Monty is an interpreter for the Monty bytecode files. Monty is a simple language that allows manipulating stacks, implementing stack-based algorithms, and performing various operations on a stack. This project, completed by Thetele Ramoonyane for Holberton School, consists of an interpreter written in C that can parse Monty bytecode files and execute the operations specified in them.

## Table of Contents

1. [About](#about)
2. [Project Files](#project-files)
3. [Usage](#usage)
4. [Available Operations](#available-operations)
5. [Compilation](#compilation)
6. [Example](#example)
7. [Authors](#authors)

## About

This project aims to create an interpreter for Monty bytecode files. It utilizes a doubly linked list representation of a stack to perform stack operations like push, pop, swap, add, subtract, divide, mod, multiply, pchar, pstr, rotl, rotr, stack, and queue. The interpreter reads Monty bytecode files line by line, executing the specified operations on the stack.

## Project Files

The project consists of several source files:

- `monty.h`: Header file containing necessary function prototypes, structs, and included libraries.
- `push.c`: Contains the function to add a node to the stack.
- `pall.c`: Implements printing all the values in the stack.
- `pint.c`: Prints the value at the top of the stack.
- `pop.c`: Removes the top element of the stack.
- `swap.c`: Swaps the top two elements of the stack.
- `add.c`: Adds the top two elements of the stack.
- `nop.c`: Represents a no-operation function.
- `sub.c`: Subtracts the top element of the stack from the second top element.
- `div.c`: Divides the top two elements of the stack.
- `mul.c`: Multiplies the top two elements of the stack.
- `mod.c`: Computes the rest of the division of the second top element of the stack by the top element of the stack.
- `pchar.c`: Prints the character at the top of the stack.
- `pstr.c`: Prints characters from the stack until a non-printable character.
- `rotl.c`: Rotates the stack to the top.
- `rotr.c`: Rotates the stack to the bottom.
- `stack.c`: Sets a value to the bus.lifi variable for stack mode.
- `queue.c`: Sets a value to the bus.lifi variable for queue mode and implements queue-related functions.

## Usage

To use the Monty interpreter, compile the source files and run the resulting executable with a Monty bytecode file. The interpreter expects a Monty bytecode file as an argument containing valid Monty language instructions.

```bash
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
$ ./monty file.m

Available Operations
The interpreter supports various operations including:

push: Adds an element to the stack.
pall: Prints all the values on the stack.
pint: Prints the value at the top of the stack.
pop: Removes the top element of the stack.
swap: Swaps the top two elements of the stack.
add: Adds the top two elements of the stack.
sub: Subtracts the top element of the stack from the second top element.
div: Divides the second top element of the stack by the top element.
mul: Multiplies the top two elements of the stack.
mod: Computes the rest of the division of the second top element of the stack by the top element.
pchar: Prints the character at the top of the stack.
pstr: Prints characters from the stack until a non-printable character.
rotl: Rotates the stack to the top.
rotr: Rotates the stack to the bottom.
stack: Sets stack mode for the interpreter.
queue: Sets queue mode for the interpreter and provides queue-related functions.
Compilation
Compile the Monty interpreter using the following command:

$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty

Example
Suppose you have a Monty bytecode file named file.m with the following content:
push 1
push 2
push 3
pall
add
pall
Running the interpreter on this file will produce the following output:
$ ./monty file.m
1
2
3
5
Authors
This Monty interpreter project is authored by Thetele Ramoonyane and Tlali David Makhothi for Holberton School. Feel free to contribute or report issues via GitHub.
