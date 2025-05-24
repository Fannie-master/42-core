/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 17:42:48 by cafang            #+#    #+#             */
/*   Updated: 2025/05/24 17:42:48 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* use f function for each char in s, and return new string
	char (*f)(unsigned int, char)
	function pointer to realize function transfer
	return: char
	unsigned int: the char's index in s
	char: char itself
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	ret = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ret)
		return (NULL);
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

/*static char	ft_add_index(unsigned int i, char c)
{
	return(c + i);
}

int	main(void)
{
	char	*s = "abcd";
	char	*ret;

	ret = ft_strmapi(s, ft_add_index);
	printf("%s\n", ret);
	free(ret);
	return (0);
}*/
