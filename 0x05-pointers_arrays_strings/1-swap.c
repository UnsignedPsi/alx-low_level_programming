#include "main.h"

/**
 * swap_int - a function that takes two inputs and swaps the two numbers
 * @a: input integer
 * @b:input integer
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
