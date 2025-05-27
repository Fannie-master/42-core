/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:21:09 by cafang            #+#    #+#             */
/*   Updated: 2025/05/27 13:21:09 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}

/*int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	
	lst1 = ft_lstnew("hello");
	lst2 = ft_lstnew("world");
	lst3 = ft_lstnew("!");
	lst1->next = lst2;
	lst2->next = lst3;
	int	len = ft_lstsize(lst1);
	printf("size:%d\n", len);
	free(lst1);
	free(lst2);
	free(lst3);
	return (0);
}*/