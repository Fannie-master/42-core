/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:22:41 by cafang            #+#    #+#             */
/*   Updated: 2025/05/23 15:22:41 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
}

/*int	main(void)
{
	t_list	*lst = ft_lstnew("hello");
	t_list	*new = ft_lstnew("world");

	ft_lstadd_back(&lst, new);
	t_list	*current = lst;
	while(current)
	{
		printf("%s\n", (char *)current->content);
		current  = current->next;
	}
	return (0);
}*/