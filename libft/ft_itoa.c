#include <stdio.h>
#include <stdlib.h>

static int	count_len(long n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n / 10 != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*ret;

	num = (long)n;
	len = count_len(num);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	if (num < 0)
	{
		ret[0] = '-';
		num = -num;
	}
	if (num == 0)
	{
		ret[0] = '0';
		ret[1] = '\0';
		return (ret);
	}
	ret[len] = '\0';
	while (num > 0)
	{
		--len;
		ret[len] = num % 10 + '0';
		num = num / 10;
	}
	return (ret);
}