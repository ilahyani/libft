#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new;
	t_list	*tmp;

	tmp = NULL;
	node = lst;
	while (node)
	{
		new = ft_lstnew((*f)(node->content));
		if (!new)
		{
			ft_lstclear(&new, del);;
			return (0);
		}
		new->next = tmp;
		tmp = new;
		node = node->next;
	}
	return (new);
}
