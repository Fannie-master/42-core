/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 14:02:16 by cafang            #+#    #+#             */
/*   Updated: 2025/05/23 14:24:16 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)last);
}

/*int	main(void)
{
	printf("%s\n", ft_strrchr("hello", 'l'));
	printf("%s\n", ft_strrchr("hello", '\0'));
	printf("%s\n", ft_strrchr("hello", 'w'));
	return (0);
}*/
