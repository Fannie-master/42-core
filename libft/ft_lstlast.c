/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:40:52 by cafang            #+#    #+#             */
/*   Updated: 2025/05/27 13:40:52 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
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
	t_list	*last = ft_lstlast(lst1);
	if (last)
		printf("the last one: %s\n", (char *)last->content);
	else
		printf("fail\n");
	free(lst1);
	free(lst2);
	free(lst3);
	return (0);
}*/