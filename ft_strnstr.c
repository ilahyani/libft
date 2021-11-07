/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:23:14 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/04 09:08:06 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	int		x;
	char	*b;
	char	*l;

	b = (char *) big;
	l = (char *) little;
	if (!*l)
		return ((char *)(big));
	i = 0;
	while (i < len)
	{
		j = 0;
		if (b[i] == l[j])
		{
			x = i;
			while (i + j < len && b[i + j] == l[j])
				j++;
			if (l[j] == '\0')
				return ((char *)(big + x));
		}
		i++;
	}
	return (NULL);
}
