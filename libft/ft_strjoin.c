#include "libft.h"

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