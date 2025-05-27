/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:51:32 by cafang            #+#    #+#             */
/*   Updated: 2025/05/27 13:51:32 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/*void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst1 = malloc(sizeof(t_list));
	lst1->content = ft_strdup("hello");
	lst1->next = NULL;
	ft_lstdelone(lst1, del);
	printf("delete successfully\n");
	return (0);
}*/