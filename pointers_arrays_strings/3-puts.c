/**
 * string_length - Computes the length of a null-terminated string.
 *
 * @s: Pointer to the string.
 *
 * Return: The length of the string.
 */
int int_strlen(char *s)
{
    int length = 0;

    while (*str != '\0') {
        length++;
        str++;
    }

    return length;
}
