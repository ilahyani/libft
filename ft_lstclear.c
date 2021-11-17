/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 04:17:09 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/17 02:24:00 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (lst)
	{
		tmp = (*lst)->next;
		(*del)((*lst)->content);
		free(lst);
		*lst = tmp;
	}
}
/*
int    main() {
    t_list *tmp, *new = NULL, *last, *head = NULL;

    for (int i = 0; i < 5; i++)
    {
        tmp = ft_lstnew((char *) "whtvr");
        tmp->next = head;
        head = tmp;
    }
    new = ft_lstnew((char *) "last");
    ft_lstadd_back(&head, new);
    last = ft_lstlast(head);
    printf("last before clear: %s\n", last->content);
	ft_lstclear(&last, (*f)(last->content));
    printf("last after clear: %s\n", last->content);
	return (0);
}*/
