#include "functions_pointers.h"
#include <stdio.h>

/**
 * op_add - adds two numbers
 * @a: number 1
 * @b: number 2
 * Return: result
 */
int op_add(int a, int b){
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: number 1
 * @b: number 2
 * Return: result
 */
int op_sub(int a, int b){
        return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: number 1
 * @b: number 2
 * Return: result
 */
int op_mul(int a, int b){
        return (a * b);
}
/**
 * op_divides - divides two numbers
 * @a: number 1
 * @b: number 2
 * Return: result
 */
int op_div(int a, int b){
        return (a / b);
}
/**
 * op_mod - rem division two numbers
 * @a: number 1
 * @b: number 2
 * Return: result
 */
int op_mod(int a, int b){
        return (a % b);
}
