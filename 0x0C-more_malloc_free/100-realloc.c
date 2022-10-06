#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *reaptr;
if (ptr == NULL)
{
reaptr = malloc(new_size);
if (reaptr == NULL)
{
free(ptr);
return (NULL);
}
free(ptr);
return (reaptr);
}
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
reaptr = malloc(new_size);
if (reaptr == NULL)
{
free(ptr);
return (NULL);
}
if (new_size > old_size)
_memcpy(reaptr, ptr, old_size);
free(ptr);
return (reaptr);
}
/**
 * _memcpy - function that copies memory area
 * @dest: dest positions
 * @src: source position
 * @n: size of bytes
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
unsigned int j = 0;
while (i < n)
{
*(dest + i) = *(src + j);
i += 1;
j += 1;
}
return (dest);
}
