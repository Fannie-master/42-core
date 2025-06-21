/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 14:37:25 by cafang            #+#    #+#             */
/*   Updated: 2025/06/21 15:13:14 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_puthex_upper(unsigned int n, int fd)
{
    int count;
    char    c;
    char    *str_hex;

    count = 0;
    str_hex = "0123456789ABCDEF";
    if (n >= 16)
        count += ft_puthex_upper(n / 16, fd);
    c = str_hex[n % 16];
    count += write(fd, &c, 1);
    return (count);
}