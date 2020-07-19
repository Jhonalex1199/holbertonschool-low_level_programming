#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * p_char - print character.
 * @form: name va_list.
 */
void p_char(va_list form)
{
	printf("%c", va_arg(form, int));
}

/**
 * p_int - print integer.
 * @form: name va_list.
 */
void p_int(va_list form)
{
	printf("%i", va_arg(form, int));
}

/**
 * p_float - print float numbers.
 * @form: name of va_list.
 */
void p_float(va_list form)
{
	printf("%f", va_arg(form, double));
}

/**
 * p_string - print string.
 * @form: name va_list.
 */
void p_string(va_list form)
{
	char *str;

	str = va_arg(form, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
*print_all - print anything.
*@format: format.
*/
void print_all(const char * const format, ...)
{
	va_list panything;
	va_start(panything, format);
	int count = 0, count2 = 0, i = 0;
	ultra array[] = {
	{'c', p_char},
	{'i', p_int},
	{'f', p_float},
	{'s', p_string},
	};

	while (count2 <= format)
	{
		while (count <= 3)
		{
			if (array[count].s == (*format))
			{
			return (array[count].f);
			}
		count++;
		}
	count2++;
	}
}
