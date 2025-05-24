/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 18:44:42 by cafang            #+#    #+#             */
/*   Updated: 2025/05/24 18:44:42 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// no return, use f function for each char in original s

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	ft_test(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = '0';
	else
		*c = '1';
}
int	main(void)
{
	char	s[] = "1234 ";
	ft_striteri(s, ft_test);
	printf("%s\n", s);
	return (0);
}*/
