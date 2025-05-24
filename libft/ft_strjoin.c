/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 10:54:47 by cafang            #+#    #+#             */
/*   Updated: 2025/05/24 10:54:47 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* s1, s2 are both char const * can't be alter, 
	so we need a new variable: char *ret to receive the final string.
	we use ft_strlen to get the total len, then use malloc for allocate memory
	ft_strlcpy can copy from s1 to ret and return the len,
	then use ft_strlcat to cat s2 behind ret(which has become s1).
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s1, len + 1);
	ft_strlcat(ret, s2, len + 1);
	return (ret);
}

/*int main(void)
{
    char const  *s1 = "hello,";
    char const  *s2 = "world";
    char    *join;

    join = ft_strjoin(s1, s2);
    if(join)
    {
        printf("%s\n", join);
        free(join);
    }
    return (0);
}*/