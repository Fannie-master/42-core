/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 16:08:56 by cafang            #+#    #+#             */
/*   Updated: 2025/07/03 16:31:56 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H 

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
//#include <stdio.h>

int	ft_printf(const char *formats, ...);
int	ft_putchar(char c, int fd);
int	ft_putstr(char *s, int fd);
int	ft_putnbr(int n, int fd);
int	ft_putnbr_unsigned(unsigned int n, int fd);
int	ft_puthex_lower(unsigned int n, int fd);
int	ft_puthex_upper(unsigned int n, int fd);
int	ft_puthex_pointer(void *p, int fd);

#endif
