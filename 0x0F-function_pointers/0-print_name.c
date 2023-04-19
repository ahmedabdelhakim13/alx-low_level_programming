#include "functions_pointers"
/**
 *print_name - prints the name
 *@name: string to be printed
 *@f: pointer to character
 *
 *
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
