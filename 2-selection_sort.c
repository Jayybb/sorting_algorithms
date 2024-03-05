#include "sort.h"

/**
 * selection_sort - This sorts an array of integers in ascending
 * order using the Selection sort algorithm
 *
 * @array: input array of integers
 * @size: size of the array
 * Return: no return
 */
void selection_sort(int *array, size_t size)
{
	int cal;
	size_t a, c, b;

	for (a = 0; a < size; a++)
	{
		b = a;
		for (c = a + 1; c < size; c++)
		{
			if (array[b] > array[c])
				b = c;
		}

		if (a != b)
		{
			cal = array[a];
			array[a] = array[b];
			array[b] = cal;
			print_array(array, size);
		}
	}
}
