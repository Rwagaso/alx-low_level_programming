#include "function_pointers.h"
	#include <stdio.h>
	/**
	 * print_name - print name using pointer to function
	 * @name: string to add
	 * @f: pointer to function
	 * Return: nothing
	 **/
	int print_name(char *name, int (*f)(char *))
	{
		if (name == NULL || f == NULL)
			return;


		f(name);
	}
