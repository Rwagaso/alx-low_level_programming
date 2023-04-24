#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size:ize of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, intize, int (*cmp)(int))
{
	int i;

	if (array == NULL || ize <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < ize; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
