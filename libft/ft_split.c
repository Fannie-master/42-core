#include <stdlib.h>
#include <stdio.h>

static size_t	ft_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	char	*start;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	ret = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!ret)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			ret[i++] = ft_substr(start, 0, s - start);
		}
		else
			s++;
	}
	ret[i] = NULL;
	return (ret);
}
