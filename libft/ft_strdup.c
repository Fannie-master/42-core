/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 10:23:18 by cafang            #+#    #+#             */
/*   Updated: 2025/05/24 10:23:18 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* we can use ft_strlen to get the len of s1 for malloc
	(len + 1) is for '\0'
	ft_strlcpy can copy from s1 to ret
*/

char	*ft_strdup(const char *s1)
{
	char	*ret;
	size_t	len;

	len = ft_strlen(s1);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s1, len + 1);
	return (ret);
}

/*int	main(void)
{
	char	*str = "Hello, world";
	char	*ret = ft_strdup(str);

	printf("%s\n", ret);
	free(ret);
	return (0);
}*/