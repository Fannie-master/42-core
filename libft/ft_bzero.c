/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 09:39:55 by cafang            #+#    #+#             */
/*   Updated: 2025/05/23 11:00:11 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/*int	main(void)
{
	char	s[5];
	size_t	i;

	i = 0;
	ft_bzero(s, sizeof(s));
	while (i < sizeof(s))
	{
		printf("%d", s[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
