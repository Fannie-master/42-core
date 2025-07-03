/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 15:03:44 by cafang            #+#    #+#             */
/*   Updated: 2025/07/03 16:18:16 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_re(unsigned long address, char *hex, int fd)
{
	int		count;
	char	c;

	count = 0;
	if (address == 0)
		return (count);
	count += ft_re(address / 16, hex, fd);
	c = hex[address % 16];
	count += write(fd, &c, 1);
	return (count);
}

int	ft_puthex_pointer(void *p, int fd)
{
	unsigned long	address;
	char			*hex;
	int				count;

	if (!p)
		return (write(fd, "(nil)", 5));
	address = (unsigned long)p;
	hex = "0123456789abcdef";
	count = 0;
	count += write(fd, "0x", 2);
	if (address == 0)
		count += (write(fd, "0", 1));
	else
		count += ft_re(address, hex, fd);
	return (count);
}
