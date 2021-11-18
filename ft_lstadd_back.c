/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 02:36:02 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/18 15:12:50 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// int main() {
// 	t_list *tmp = NULL;
// 	t_list *new = NULL;

// 	new = ft_lstnew((char*) "hello");
// 	printf("%s\n",new->content);
// 	ft_lstadd_back(&tmp,new);
// 	printf("%s\n",tmp->content);
// }

// int main()
// {
// 	t_list * l =  NULL; t_list * l2 =  NULL; 
// 	ft_lstadd_back(&l, ft_lstnew((char*)"1"));
// 	/* 1 */ printf("%s\n",l->content);
// 	///* 2 */ printf("%s\n",l->next);
// 	printf("\n");
// 	ft_lstadd_back(&l, ft_lstnew((char*)"2"));
// 	/* 3 */ printf("%s\n",l->content);
// 	/* 4 */ printf("%s\n",l->next->content );
// 	///* 5 */ printf("%s\n",l->next->next);
// 	printf("\n");
// 	ft_lstadd_back(&l2, ft_lstnew((char*)"3"));
// 	ft_lstadd_back(&l2, ft_lstnew((char*)"4"));
// 	ft_lstadd_back(&l, l2);
// 	/* 6 */ printf("%s\n",l->content);
// 	/* 7 */ printf("%s\n",l->next->content );
// 	/* 8 */ printf("%s\n",l->next->next->content);
// 	/* 9 */ printf("%s\n",l->next->next->next->content);
// 	// /* 10 */ printf("%s\n",l->next->next->next->next);
//  }