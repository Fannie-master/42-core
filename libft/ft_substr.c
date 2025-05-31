/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 10:25:48 by cafang            #+#    #+#             */
/*   Updated: 2025/05/24 10:25:48 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*  1.start > ft_strlen(s)  we should malloc 1 for '\0'
	2.if not over the boundary, we should know the actual len,
	then we can use malloc to allocate memory.
! explain: if (ft_strlen(s + start) < len); 
in case the remaining len is short, can't meet the required len in main
we should get actual len = ft_strlen (s + start), 
it means from s[start] to the remaining char
*/

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		ret = malloc(sizeof(char) * 1);
		if (!ret)
			return (NULL);
		ret[0] = '\0';
		return (ret);
	}
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}

/*int main(void)
{
	char *str = "hello world";
	char *ret = ft_substr(str, 8, 14);
	printf("%s\n", ret);
	free (ret);
	return (0);
}*/
