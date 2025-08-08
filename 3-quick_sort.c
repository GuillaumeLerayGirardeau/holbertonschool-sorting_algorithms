#include "sort.h"

/**
 * swap_array- Puts integers smaller than pivot on the left, and integrers
 * biggers on the right
 * @array: Array of integers
 * @start: Start point of the array
 * @end: end point of the array
 * @size: Size of this array
 *
 * Return: new pivot point
 */
int swap_array(int *array, size_t start, size_t end, size_t size)
{
	int temp = 0, i = -1;
	size_t j = start;

	for (j = 0; j < end; j++)
	{
		if (array[j] < array[end])
		{
			i++;
			if (array[j] != array[i])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	i++;
	if (array[i] != array[j])
	{
		temp = array[i];
		array[i] = array[end];
		array[end] = temp;
		print_array(array, size);
	}
	return (i);

}
/**
 * quick_sort- Sort an array in ascending order using the quick sort
 * algorithm.
 * @array: Array of integers you want to sort in an ascending order
 * @size: Size of this array
 */

void quick_sort(int *array, size_t size)
{
	size_t end = size - 1, start = 0;
	int result = 0;

	if (array == NULL || size < 2)
		return;

	while (result <= 0)
	{
		result = swap_array(array, start, end, size);
	}

	start = result + 1;
	while (result > 0)
	{
		result = swap_array(array, 0, result - 1, size);
	}
	while (end > start)
	{
		swap_array(array, start, end, size);
		end--;
	}
}
