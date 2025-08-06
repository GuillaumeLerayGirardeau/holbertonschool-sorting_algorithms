#include "sort.h"
/**
 * bubble_sort- Sorting the integers of an array in ascending numbers.
 * @array: You want to sort the integers of.
 * @size: size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	int temp;
	size_t size_array = size;

	if (array == NULL || size < 1)
		return;
	while (size_array > 0)
	{
		for (i = 0 ; i + 1 <= size_array ; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
		size_array--;
	}
}
