/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 11:14:03 by cafang            #+#    #+#             */
/*   Updated: 2025/05/24 11:14:03 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* function: 
from the start of S1 to judge each char is in set, 
if in, then move pointer BACKWARDS, 
if meet char which not in set then get the new start of final string.
BESIDES, from the end of S1 to judge each char is in set,
if in, then move pointer FORWARD,
if meet char which is not in set then get the new end of final string.
   1. !s1 || !set    return(NULL)
   2. find start and end
   3. from start to judge each char is equal to set
   4. from end to judge each char is equal to set
   5. use ft_substr(start, 0 (end -start)) to get the final string.
   ! we don't use (end - start + 1) because 
   	 in ft_substr: ret = malloc(sizeof(char) * (len + 1));
   ! we use ft_isset(*start, set) 
     because *start can get the actual char in start
*/

static	int	ft_isset(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*ret;

	if (!s1 || !set)
		return (NULL);
	start = (char *)s1;
	end = (char *)s1 + ft_strlen(s1);
	while (*start && ft_isset(*start, set))
		start++;
	while (start < end && ft_isset(*(end -1), set))
		end--;
	ret = ft_substr(start, 0, (end - start));
	return (ret);
}

/*int	main(void)
{
	char	*s1 = "\t\nabcd abcd abcd\t";
	char	*set1 = "\t\n";
	char	*ret1 = ft_strtrim(s1, set1);
 	printf("%s\n", ret1);
	free(ret1);

	char	*s2 = "   abcd abcd    ";
	char	*set2 = "   ";
	char	*ret2 = ft_strtrim(s2, set2);
 	printf("%s\n", ret2);
	free(ret2);

	char	*s3 = "   abcd abcd    ";
	char	*set3 = "ef";
	char	*ret3 = ft_strtrim(s3, set3);
 	printf("%s\n", ret3);
	free(ret3);

	return (0);
}*/
