#include "variadic_functions.h"

/**
 * print_strings -  function that prints strings, followed by a new line
 *
 * @separator: This is the input separator
 * @n: This is the number of items
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i = 0;
	char *str;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)", i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
