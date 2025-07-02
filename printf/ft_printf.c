#include "libftprintf.h"

void print_format(char c, va_list args, int *count)
{
	if (c == 'c')
		*count += ft_putchar(va_arg(args, int), 1);
	else if (c == 's')
		*count += ft_putstr(va_arg(args, char *), 1);
	else if (c == 'd' || c == 'i')
		*count += ft_putnbr(va_arg(args, int), 1);
	else if (c == 'p')
		*count += ft_puthex_pointer(va_arg(args, void *), 1);
	else if (c == 'u')
		*count += ft_putnbr_unsigned(va_arg(args, unsigned int), 1);
	else if (c == 'x')
		*count += ft_puthex_lower(va_arg(args, unsigned int), 1);
	else if (c == 'X')
		*count += ft_puthex_upper(va_arg(args, unsigned int), 1);
	else if (c == '%')
		*count += write(1, "%", 1);
}

int    ft_printf(const char *formats, ...)
{
	va_list	args;
	int			i;
	int		 count;

	va_start(args, formats);
	i = 0;
	count = 0;
	while (formats[i])
	{
		if (formats[i] == '%')
		{
			print_format(formats[i + 1], args, &count);
			i++;
		}
		else
		{
			write(1, &formats[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
