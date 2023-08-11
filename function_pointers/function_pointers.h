#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H

void print_name(char *name, void (*f)(char *));
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
void print_elem(int elem);
void print_elem_hex(int elem);
#endif
