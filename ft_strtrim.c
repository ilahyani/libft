/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:38:16 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/07 14:47:45 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned long	i;
	char			*dupset;
	char			*dups1;
	
	i = 0;
	while (s1[i])
	{
		if (!ft_strnstr(s1, set, ft_strlen(set)))
			break;
		s1 += ft_strlen(set);
	}
	dupset =  ft_strrev(ft_strdup(set));
	dups1 = ft_strrev(ft_strdup(s1));
	while (dups1[i])
	{
		if (!ft_strnstr(dups1, dupset, ft_strlen(dupset)))
			break;
		dups1 += ft_strlen(dupset);
	}
	return (ft_strrev(dups1));
}
