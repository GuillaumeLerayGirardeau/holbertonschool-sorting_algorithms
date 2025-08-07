#include "sort.h"
/**
 * selection_sort- Sort an array in ascending order using the selection sort
 * algorithm.
 * @array: Array of integers you want to sort in an ascending order
 * @size: Size of this array
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j;
	size_t temp;
	int smallest_value;

	if (array == NULL || size < 2)
		return;

	while (i < size)
	{
		temp = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[i] && array[j] < array[temp])
				temp = j;
		}
		if (array[i] != array[temp])
		{
			smallest_value = array[temp];
			array[temp] = array[i];
			array[i] = smallest_value;
			print_array(array, size);
		}
		i++;
	}
}
