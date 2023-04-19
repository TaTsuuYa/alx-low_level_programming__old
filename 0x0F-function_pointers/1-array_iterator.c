#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - execs @action
 * on every element of @array
 * @array: array of elements
 * @size: size of @array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size > 0 && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}

