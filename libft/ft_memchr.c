/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:29:32 by cafang            #+#    #+#             */
/*   Updated: 2025/05/23 14:42:44 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ret;

	ret = (unsigned char *)s;
	while (n--)
	{
		if (*ret == (unsigned char)c)
			return (ret);
		ret++;
	}
	return (NULL);
}

/*int	main(void)
{
	printf("%s\n", (char *)ft_memchr("hello", 'l', 5));
	printf("%s\n", (char *)ft_memchr("hello", 'l', 2));
	printf("%s\n", (char *)ft_memchr("hello", '\0',6));//n=6:'\0'
	return (0);
}*/
