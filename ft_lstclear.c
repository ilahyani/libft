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

void	*del(void *vd)
{
	vd  = NULL;
	return(0);
}

 
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!del || !*lst)
		return ;
	tmp = (*lst);
	while (tmp)
	{
		tmp2 = tmp->next;
		(*del)(tmp->content);
		free(tmp);
		tmp = tmp2;
	}
	*lst = NULL;
}

#include<stdio.h>
int main()
{
	t_list *l =  NULL; 
	t_list *l2 =  NULL; 
	
	ft_lstadd_back(&l, ft_lstnew((char*)"1"));
	ft_lstadd_back(&l, ft_lstnew((char*)"2"));
	ft_lstadd_back(&l2, ft_lstnew((char*)"3"));
	ft_lstadd_back(&l2, ft_lstnew((char*)"4"));
	ft_lstadd_back(&l, l2);
	while (ft_strncmp(l->content, "3", 1))
		l = l->next;
	ft_lstclear(&l, (*del)(l->content));
	while (l)
	{
		printf("%s\n", l->content);
		l = l->next;
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