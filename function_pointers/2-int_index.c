/**
 * int_index - function that searches for an int
 * @array: array of integers where search is done
 * @size: size of array
 * @cmp: pointer to function that compares
 * Return: index where function found especific integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
