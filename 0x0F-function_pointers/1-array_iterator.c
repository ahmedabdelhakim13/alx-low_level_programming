#include "function_pointers.h"
/**
 *array_iterator - execute a function as a parameter
 *on every element in the array
 *@array:array to be executed by a function
 *@size: size of the array
 *@action:pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}

}
