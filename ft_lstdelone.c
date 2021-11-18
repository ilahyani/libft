/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 02:37:10 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/18 14:35:36 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
//#include <stdio.h>

//void	del(void *vd)
//{
//	vd  = NULL;
//}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*tmp;

	tmp = lst->next;
	(*del)(lst->content);
	free(lst);
	lst = tmp;
/*	printf("\n\n");
	while(lst)
	{
		printf("%s\n", lst->content);
		lst = lst->next;
	}*/
}

/* int main() {
 	t_list	*curr;
 	t_list	*tmp;
 	t_list	*head = NULL;
 	for (int i = 0; i < 4; i++)
 	{
 		curr = ft_lstnew((char *)"ABCD");
 		curr->next = head;
 		head = curr;
 	}
 	tmp = curr;
 	while(curr)
 	{
 		printf("%s\n", curr->content);
 		curr = curr->next;
 	}
 	ft_lstdelone(tmp, &del);
 }*/
