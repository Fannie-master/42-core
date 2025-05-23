#include "libft.h"

static int	ft_isset(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
		{
			return (1);
		}
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
	end = start + ft_strlen(s1);
	while (*start && ft_isset(*start, set))
		start++;
	while (start < end && ft_isset(*(end - 1), set))
		end--;
	ret = ft_substr(start, 0, (end - start));
	if (!ret)
		return (NULL);
	return (ret);
}

/*int	main(void)
{
	char	*s1 = "abcd abcd abcd";
	char	*set = "abcd";

	printf("%s\n", ft_strtrim(s1, set));
}*/
