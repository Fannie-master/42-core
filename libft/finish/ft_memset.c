/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 10:15:41 by cafang            #+#    #+#             */
/*   Updated: 2025/05/23 11:05:39 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ret;
	size_t			i;

	ret = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ret[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	char	s[5];
	size_t	i;

	i = 0;
	ft_memset(s, '3', sizeof(s));
	while (i < sizeof(s))
	{
		printf("%c", s[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
