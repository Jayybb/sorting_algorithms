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
	_wesort(array, 0, size - 1, size);
}
/**
 * _wesort - This is the auxiliar function for the the quick_sort function
 * @m: Total input arrray
 * @low: The index for the first elements
 * @high: This is index for the last elements
 * @size: size of the arrays
 * Return: nothing to return
 */
void _wesort(int *m, int low, int high, int size)
{
	int q, j, c;
	int cal;

	if (low < high)
	{
		q = high;
		j = low;
		for (c = low; c < high; c++)
		{
			if (m[c] < m[q])
			{
				if (c != j)
				{
					cal = m[c];
					m[c] = m[j];
					m[j] = cal;
					print_array(m, size);
				}
				j++;
			}
		}
		if (j != q && m[j] != m[q])
		{
			cal = m[j];
			m[j] = m[q];
			m[q] = cal;
			print_array(m, size);
		}
		_qsort(m, low, j - 1, size);
		_qsort(m, j + 1, high, size);
	}
}
