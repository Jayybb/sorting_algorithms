#include "sort.h"

/**
 * bubble_sort - sorting the functions for array using bubble algorithm
 *
 * @array: Array of iput 
 * @size: Array of size
 * Return: no return
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp, swap;

	for (j = size, swap = 1; j > 0 && swap; j--)
	{
		swap = 0;
		for (i = 0; (i + 1) < j; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = tmp;
				print_array(array, size);
				swap = 1;
			}
		}
	}
}
