/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:06:26 by cafang            #+#    #+#             */
/*   Updated: 2025/05/24 17:06:26 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n / 10 != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*ret;

	num = (long)n;
	len = count_len(num);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ret[len] = '\0';
	if (num == 0)
		ret[0] = '0';
	if (num < 0)
	{
		ret[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		ret[--len] = (num % 10) + '0';
		num = num / 10;
	}
	return (ret);
}

/*int	main(void)
{
	int	n = -10;
	char	*s;
	
	s = ft_itoa(n);
	printf("%s\n", s);
	free(s);
	return (0);
}*/