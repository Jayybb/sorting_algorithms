#include "sort.h"
/**
 * counting_sort - Sorts a range of integers 
 * using the counting sort method
 * in ascending order.
 * @array: array
 * @size: size
 * Return: no return
 */
void counting_sort(int *array, size_t size)
{
	int i, j;
	int *buff, *a;

	if (size < 2)
		return;

	for (i = j = 0; j < (int)size; j++)
		if (array[j] > i)
			i = array[j];

	buff = malloc(sizeof(int) * (i + 1));
	if (!buff)
		return;

	for (j = 0; j <= i; j++)
		buff[j] = 0;
	for (j = 0; j < (int)size; j++)
		buff[array[j]] += 1;
	for (j = 1; j <= i; j++)
		buff[j] += buff[j - 1];

	print_array(buff, (i + 1));
	a = malloc(sizeof(int) * (size + 1));

	if (!a)
	{
		free(buff);
		return;
	}
	for (j = 0; j < (int)size; j++)
	{
		a[buff[array[j]] - 1] = array[j];
		buff[array[j]] -= 1;
	}

	for (j = 0; j < (int)size; j++)
		array[j] = a[j];

	free(buff);
	free(a);
}
