/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 02:36:02 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/17 18:27:29 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ft_lstlast.c"
//#include "ft_lstnew.c"
//#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
	new->next = NULL;
}

/*
int	main() {
	t_list *tmp, *new = NULL, *last, *head = NULL;

	for (int i = 0; i < 5; i++)
	{
		tmp = ft_lstnew((char *) "whtvr");
		tmp->next = head;
		head = tmp;
	}
	head = NULL;
	new = ft_lstnew((char *)"akhir wa7ed");
	ft_lstadd_back(&head, new);
	last = ft_lstlast(head);
	printf("%s\n", last->content);
}*/
