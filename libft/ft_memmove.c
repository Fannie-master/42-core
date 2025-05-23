/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:14:38 by cafang            #+#    #+#             */
/*   Updated: 2025/05/23 12:38:37 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t					i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (0);
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		i = n;
		while(i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dest);
}

/*int	main(void)
{
	char	dest[10] = "abcdABCD";
	char	src[10] = "efgh";

	ft_memmove(dest, src, 4);
	printf("%s\n", dest);
	return (0);
}*/
