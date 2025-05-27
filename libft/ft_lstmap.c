/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:29:43 by cafang            #+#    #+#             */
/*   Updated: 2025/05/27 14:29:43 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstnew;
	t_list	*node;

	lstnew = NULL;
	while (lst != NULL)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&node, del);
			return (NULL);
		}
		ft_lstadd_back(&lstnew, node);
		lst = lst->next;
	}
	return (lstnew);
}

/*void	*ft_toupper_str(void *content)
{
	char	*str = (char *)content;
	char	*new_str = ft_strdup(str);
	int	i;

	i = 0;
	while(new_str[i])
	{
		new_str[i] = ft_toupper(new_str[i]);
		i++;
	}
	return (new_str);
}

void	del(void *content)
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
	lst3 = ft_lstnew(ft_strdup("we"));
	lst1->next = lst2;
	lst2->next = lst3;
	t_list  *current = lst1;
	
	while (current)
	{
		printf("before:%s\n", (char *)current->content);
		current = current->next;
	}

	t_list	*upper_list = ft_lstmap(lst1, ft_toupper_str, del);

	current = upper_list;
	while (current)
	{
		printf("after:%s\n", (char *)current->content);
		current = current->next;
	}
	
	ft_lstclear(&lst1, del);
	ft_lstclear(&upper_list, del);

	return (0);
}*/