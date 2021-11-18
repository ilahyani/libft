/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 18:14:10 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/16 17:23:47 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*res;

	res = (t_list *) malloc (sizeof(t_list));
	if (!res)
		return (0);
	res->content = content;
	res->next = NULL;
	return (res);
}

/*
#include <stdio.h>
#include <stdio.h>
int	main() {
	t_list	*head = NULL;
	t_list	*tmp;

	for (int i = 0; i < 3; i++)
	{
		tmp = ft_lstnew((char *)"ABCD");
		tmp->next = head;
		head = tmp;
	}

	while (tmp) {
		printf("%s\n", (char *)tmp->content);
		tmp = tmp -> next;
	}
	return 0;
}
*/