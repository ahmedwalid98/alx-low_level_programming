#include "main.h"
/**
 * _realloc - reallocates a memory block
 * @ptr: a pointer to the memory
 * @old_size: size in bytes for ptr
 * @new_size: new size in bytes for ptr
 * Return: pointer to new memroy block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, n = new_size;
	char *oldptr = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	} else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	} else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		p[i] = oldptr[i];

	free(ptr);
	return (p);
}
