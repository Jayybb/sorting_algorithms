#include "sort.h"

/**
 * selection_sort - This sorts an array of integers in ascending order using the Selection sort algorithm
 *
 * @array: input the array of integers
 * @size: size of the totalarray
 * Return: nothing is to return
 */
void selection_sort(int *array, size_t size)
{
	int cal;
	size_t a, b, i;

	for (a = 0; a < size; a++)
	{
		m = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[i] > array[b])
				i = b;
		}

		if (a != i)
		{
			cal = array[a];
			array[a] = array[i];
			array[i] = cal;
			print_array(array, size);
		}
	}
}
