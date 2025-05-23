#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *current;

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