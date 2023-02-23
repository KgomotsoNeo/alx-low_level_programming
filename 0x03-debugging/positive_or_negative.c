#include "main.h"

/**
 * positive_or_negative - checks for positive and negative
 * @i: the number to be checked
 * Return: Always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("the number %d is negative", i);
	else
		printf("the number %d is positive", i);
}
