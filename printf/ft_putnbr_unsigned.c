/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 13:56:43 by cafang            #+#    #+#             */
/*   Updated: 2025/06/21 14:33:15 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libftprintf.h"

int	ft_putnbr_unsigned(unsigned int n, int fd)
{
    int     count;
    char    c;

    count = 0;
    if (n > 9)
        count += ft_putnbr_unsigned(n / 10, fd);
    c = n % 10 + '0';
    count += write(fd, &c, 1);
    return (count);
}
