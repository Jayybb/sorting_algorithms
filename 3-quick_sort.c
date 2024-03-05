#include "sort.h"
/**
 * quick_sort - This is a function that sorts an array
 * integer in its ascending order using the sort algorithm
 *
 * @array: This input arrray
 * @size: size of the array
 * Return: nothing should be returned
 */
void quick_sort(int *array, size_t size)
{
	_qsort(array, 0, size - 1, size);
}
/**
 * _qsort - This is the auxiliar function for the the quick_sort function
 * @a: Total input arrray
 * @low: The index for the first elements
 * @high: This is index for the last elements
 * @size: size of the arrays
 * Return: nothing to return
 */
void _qsort(int *a, int low, int high, int size)
{
	int q, j, c;
	int cal;

	if (low < high)
	{
		q = high;
		j = low;
		for (c = low; c < high; c++)
		{
			if (a[c] < a[q])
			{
				if (c != j)
				{
					cal = a[c];
					a[c] = a[j];
					a[j] = cal;
					print_array(a, size);
				}
				j++;
			}
		}
		if (j != q && a[j] != a[q])
		{
			cal = a[j];
			a[j] = a[q];
			a[q] = cal;
			print_array(a, size);
		}
		_qsort(a, low, j - 1, size);
		_qsort(a, j + 1, high, size);
	}
}
