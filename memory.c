#include "shell.h"

/**
 * bfree - function that frees a pointer and NULLs the address
 * @ptr: the address of the pointer to free
 *
 * Return: 1, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}

