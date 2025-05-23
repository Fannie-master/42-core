/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 09:54:21 by cafang            #+#    #+#             */
/*   Updated: 2025/05/23 11:00:48 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char	c1;
	char	c2;

	c1 = '2';
	c2 = 'a';
	printf("%d\n", ft_isalnum(c1));
	printf("%d\n", ft_isalnum(c2));
	return (0);
}*/
