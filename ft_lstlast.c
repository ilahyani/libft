/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 01:35:00 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/16 21:56:38 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (!lst)
		return (0);
	last = lst;
	while (last->next != NULL)
		last = last->next;
	return (last);
}
/*
#include <stdio.h>
int	main() {
	t_list	*head = NULL;
	t_list	*tmp;
	t_list	*last;
	int	i;

	for (i = 0; i < 5; i++)
	{
		tmp = ft_lstnew((char *) "a + %d");
		tmp->next = head;
		head = tmp;
	}
	last = ft_lstlast(tmp);
	printf("this is the last: %s\n", last->content);
}*/
