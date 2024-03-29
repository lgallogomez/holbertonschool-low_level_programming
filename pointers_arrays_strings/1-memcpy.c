/**
 *_memcpy - copies a memory area
 *@dest: memory that will hold a copy of memory
 *@src: memory to copy mem from
 *@n: number of bytes to copy
 *Return: pointer to memory space copied
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
