/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cafang <cafang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:29:24 by cafang            #+#    #+#             */
/*   Updated: 2025/05/27 14:29:24 by cafang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void	ft_toupper_str(void *content)
{
	char	*str = (char *)content;
	while(*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
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

	ft_lstiter(lst1, ft_toupper_str);

	current = lst1;
	while (current)
	{
		printf("after:%s\n", (char *)current->content);
		current = current->next;
	}
	free(lst1->content);
	free(lst1);
	free(lst2->content);
	free(lst2);
	free(lst3->content);
	free(lst3);
	return (0);
}*/