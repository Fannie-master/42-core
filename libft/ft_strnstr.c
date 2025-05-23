/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:48:27 by cafang            #+#    #+#             */
/*   Updated: 2025/05/23 15:03:35 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*to_find == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j] && (i + j) < len)
			j++;
		if (to_find[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	printf("%s\n", (const char *)ft_strnstr("hello,world", "wo", 12));
	printf("%s\n", (const char *)ft_strnstr("hello,world", "ab", 12));
	printf("%s\n", (const char *)ft_strnstr("hello,world", "\0", 12));
	return 0;
}*/
