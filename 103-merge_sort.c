#include "sort.h"
#include <stdio.h>
/**
 * print_data - print data
 * @msg: message
 * @a: array
 * @from: from
 * @to: to
 * Return: no return
 */
void print_data(char *msg, int *a, int from, int to)
{
	char *sep;
	int j;

	printf("[%s]: ", msg);
	sep = "";

	for (j = from; j<= to; j++)
	{
		printf("%s%d", sep, a[j]);
		sep = ", ";
	}
	printf("\n");
}

/**
 * merge - An additional feature for
 * the merge sort algorithm
 * @array: array
 * @l: low index
 * @m: middle
 * @h: high index
 * @buff: buffer
 * Return: no return
 */
void merge(int *array, int l, int m, int h, int *buff)
{
	int lo, lm, i;

	lo = i = l;
	lm = m + 1;

	printf("Merging...\n");
	print_data("left", array, l, m);
	print_data("right", array, m + 1, h);

	while (lo <= m && lm <= h)
	{
		if (array[lo] < array[lm])
			buff[i++] = array[lo++];
		else
			buff[i++] = array[lm++];
	}

	while (lo <= m)
		buff[i++] = array[lo++];

	while (lm <= h)
		buff[i++] = array[lm++];

	for (i = l; i <= h; i++)
		array[i] = buff[i];

	print_data("Done", array, l, h);
}
/**
 * msort -Function auxiliary for the 
 * merge sort algorithm
 * @array: array
 * @l: low index
 * @h: high index
 * @buff: buffer
 * Return: no return
 */
void msort(int *array, int l, int h, int *buff)
{
	int m;

	if (l < h)
	{
		m = (l + h - 1) / 2;
		msort(array, l, m, buff);
		msort(array, m + 1, h, buff);
		merge(array, l, m, h, buff);
	}
}
/**
 * merge_sort -Sorts an arrayof integers
 * in ascending order using the
 * Merge sort algorithm
 * @array: array
 * @size: size
 * Return: no return
 */
void merge_sort(int *array, size_t size)
{
	int *buffer;

	buffer = malloc(sizeof(int) * size);
	if (!buffer)
		return;
	msort(array, 0, size - 1, buffer);
	free(buffer);
}
