#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lstnew;

	lstnew = (t_list *)malloc(sizeof(t_list));
	if (!lstnew)
		return (NULL);
	lstnew->content = content;
	lstnew->next = NULL;
	return (lstnew);
}

/*int	main(void)
{
	char	*content = "hello";
	t_list	*lstnew;

	lstnew = ft_lstnew(content);
	printf("content: %s\n", (char *)lstnew->content);
	free(lstnew);
	return (0);
}*/