/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 10:26:15 by cafang            #+#    #+#             */
/*   Updated: 2025/05/27 10:26:15 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int	main(void)
{
	t_list	*lst = ft_lstnew("hello");
	t_list	*new = ft_lstnew("world");

	ft_lstadd_front(&lst, new);
	t_list	*current = lst;
	while(current)
	{
		printf("%s\n", (char *)current->content);
		current  = current->next;
	}
	return (0);
}*/