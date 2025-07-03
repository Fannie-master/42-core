/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:20:58 by cafang            #+#    #+#             */
/*   Updated: 2025/07/03 16:08:51 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	print_format(char c, va_list args, int *count)
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

int	ft_printf(const char *formats, ...)
{
	va_list	args;
	int		i;
	int		count;

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
			count += write(1, &formats[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}

/*int	main(void)
{
	// %c
	char c = 'A';
	ft_printf("test for character: %c\n", c);

	// %s
	char *str = "hello";
	ft_printf("test for string: %s\n", str);
	
	// %d
	int num = -100;
	ft_printf("test for integer: %d\n", num);

	// %u
	unsigned int u_num = 100;
	ft_printf("test for unsigned int: %u\n", u_num);

	// %x hex_lower
	unsigned int hex = 255;
	ft_printf("test for lowercase hex: %x\n", hex);

	// %X hex_upper
	ft_printf("test for uppercase hex: %X\n", hex);

	// %p
	void *ptr = &num;
	ft_printf("test for pointer: %p\n", ptr);

	return (0);
}*/
