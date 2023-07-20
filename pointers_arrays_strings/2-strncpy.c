/**
 *strncpy - copy a string from src to dest
 *@dest: place to copy string src
 *@src: place where string will be copy from to dest
 *@n: number of bytes to copy from src to string
 *Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int dest_ctr = 0;
	int src_ctr = 0;

	for (src_ctr = 0; src_ctr < n; src_ctr++)
	{
		dest[dest_ctr] = src[src_ctr];
		dest_ctr++;
	}
	return(dest);
}
