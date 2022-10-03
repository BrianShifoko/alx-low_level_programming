#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars and
 *                initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i = 0;
if (size != 0)
ar = malloc(size * sizeof(char));
else
return (NULL);
if (ar == NULL)
return (NULL);
while (i < size)
{
ar[i] = c;
i += 1;
}
return (ar);
}
