/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 10:16:26 by cafang            #+#    #+#             */
/*   Updated: 2025/05/24 10:16:26 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// nmemb:the num of element  size: the size of element

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;
	size_t	i;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	ret = malloc(nmemb * size);
	if (!ret)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		((unsigned char *)ret)[i] = '\0';
		i++;
	}
	return (ret);
}

/*int	main(void)
{
	char	*str;

	str = ft_calloc(5, sizeof(char));
	printf("%s\n", str);
	free(str);
	return (0);
}*/