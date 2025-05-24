/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 14:44:43 by cafang            #+#    #+#             */
/*   Updated: 2025/05/24 14:44:43 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*function: according to char c to divide s into several substrings
	1. we should know how many substirngs in s (use ft_count)
	2. 
*/

static size_t	ft_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			count++;
			while (*s != '\0' && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char		**ret;
	char const	*start;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	ret = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!ret)
		return (NULL);
	while (*s != '\0')
	{
		if (*s != c)
		{
			start = s;
			while (*s != '\0' && *s != c)
				s++;
			ret[i++] = ft_substr(start, 0, s - start);
		}
		else
			s++;
	}
	ret[i] = NULL;
	return (ret);
}

/*int	main(void)
{
	char	*s = "apple,banana,cherry";
	char	c = ',';
	char	**ret;
	int	i;

	ret = ft_split(s, c);
	i = 0;
	if(ret)
	{
		while(ret[i])
		{
			printf("Substring %d: %s\n", i + 1, ret[i]);
			free(ret[i]);
			i++;
		}
		free(ret);
	}
	else
		printf("memory allocate failed");
	return (0);
}*/
