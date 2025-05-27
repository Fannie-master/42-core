/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:08:30 by cafang            #+#    #+#             */
/*   Updated: 2025/05/27 14:08:30 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		current = *lst;
		del(current->content);
		*lst = (*lst)->next;
		free(current);
	}
	*lst = NULL;
}

/*void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	
	lst1 = ft_lstnew(ft_strdup("hello"));
	lst2 = ft_lstnew(ft_strdup("world"));
	lst3 = ft_lstnew(ft_strdup("!"));
	lst1->next = lst2;
	lst2->next = lst3;
	t_list  *current = lst1;
	
	while (current)
	{
		printf("before clean:%s\n", (char *)current->content);
		current = current->next;
	}

	ft_lstclear(&lst1, del);

	if(current == NULL)
		printf("clear successfully\n");
	else
		printf("fail\n");

	return (0);
}*/