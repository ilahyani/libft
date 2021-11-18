/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 04:17:09 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/17 18:26:26 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include<stdio.h>

void	del(void *vd)
{
	free(vd);
}

 
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!del || !*lst)
		return ;
	tmp = *lst;
	while (tmp)
	{
		tmp2 = (tmp)->next;
		(*del)((tmp)->content);
		free(tmp);
		tmp = NULL;
		tmp = tmp2;
	}
	*lst = NULL;
}

int main()
{
	t_list *l =  NULL; 
	t_list *l2 =  NULL; 
	
	ft_lstadd_back(&l, ft_lstnew((char*)ft_strdup("1")));
	ft_lstadd_back(&l, ft_lstnew((char*)ft_strdup("2")));
	ft_lstadd_back(&l2, ft_lstnew((char*)ft_strdup("3")));
	ft_lstadd_back(&l2, ft_lstnew((char*)ft_strdup("4")));
	ft_lstadd_back(&l, l2);
	t_list *tmp = l;
	// while (ft_strncmp(l->content, "2", 1))
	// {
	// 	printf("-> %s\n", l->content);
	// 	l = l->next;
	// }
	ft_lstclear(&(l->next), &del);
	// tmp->next = NULL;
	// printf(">> %s\n", tmp->content);
	// if (tmp->next)
	// 	printf(">> %s\n", tmp->next->content);
	while (tmp)
	{
		printf("---> %s\n", tmp->content);
		tmp = tmp->next;
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