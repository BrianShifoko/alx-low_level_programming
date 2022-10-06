#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array of a certain number
 *           of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *cal;
if (nmemb == 0 || size == 0)
return (NULL);
cal = malloc(nmemb * size);
if (cal == NULL)
return (NULL);
_memset(cal, 0, nmemb * size);
return (cal);
}

/**
 * _memset - function that fills memory with a constant byte.
 * @s: mamory area to return
 * @b: constant byte
 * @n: size of bytes
 * Return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(s + i) = b;
i += 1;
}
return (s);
}
