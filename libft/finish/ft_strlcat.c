/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 13:00:56 by cafang            #+#    #+#             */
/*   Updated: 2025/05/23 13:34:38 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	i = 0;
	while (dst_len < dsize && dst[dst_len])
		dst_len++;
	while (src[src_len])
		src_len++;
	if (dsize <= dst_len)
		return (dsize + src_len);
	while ((dst_len + i) < (dsize - 1) && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*int	main(void)
{
	char	src[20] = "world";//5
	char	dst[20] = "hello,";//6

	printf("%zu\n", ft_strlcat(dst, src, 0));
	printf("%zu\n", ft_strlcat(dst, src, 4)); 
	printf("%zu\n", ft_strlcat(dst, src, 7));
	return (0);
}*/
