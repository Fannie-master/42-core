/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 16:31:43 by cafang            #+#    #+#             */
/*   Updated: 2025/06/21 14:33:22 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n, int fd)
{
	int		count;
	char	c;

	count = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648", fd));
	if (n < 0)
	{
		count += write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
		count += ft_putnbr(n / 10, fd);
	c = n % 10 + '0';
	count += write(fd, &c, 1);
	return (count);
}