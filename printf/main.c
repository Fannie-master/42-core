#include "libftprintf.h"

int	main(void)
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
}