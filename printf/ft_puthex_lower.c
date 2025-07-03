/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 14:15:17 by cafang            #+#    #+#             */
/*   Updated: 2025/07/03 16:15:17 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex_lower(unsigned int n, int fd)
{
	int		count;
	char	c;
	char	*str_hex;

	count = 0;
	str_hex = "0123456789abcdef";
	if (n >= 16)
		count += ft_puthex_lower(n / 16, fd);
	c = str_hex[n % 16];
	count += write(fd, &c, 1);
	return (count);
}
