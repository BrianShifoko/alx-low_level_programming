#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers ordered
 *               from min to max, inclusive.
 * @min: The first value of the array.
 * @max: The last value of the array.
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
int *arr;
int size;
int i = 0;

if (min > max)
return (NULL);
size = (max - min);
arr = malloc(sizeof(*arr) * (size + 1));
if (arr == NULL)
return (NULL);
while (i <= size)
{
arr[i] = min;
i++;
min++;
}
return (arr);
}
