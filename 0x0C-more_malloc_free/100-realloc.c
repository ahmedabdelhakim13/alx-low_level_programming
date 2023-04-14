#include "main.h"

/**
 * _realloc - reallocates a memory  block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: the new size , in bytes of the new memory block
 *
 * Return: pointer allocates new size memory , or Null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *p;
	unsigned int i, n
