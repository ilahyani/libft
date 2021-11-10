/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:03:47 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/07 14:46:54 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	**res(int count, char **arr, const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	while (i < count + 1)
	{
		j = 0;
		while (s[j] && s[j] != c)
			j++;
		arr[i] = (char *) malloc (sizeof(char) * (j + 1));
		if (!arr[i])
		{
			free(arr);
			return (0);
		}
		ft_memcpy(arr[i], s, (j));
		s += (j + 1);
		i++;
	}
	arr[i] = 0;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	int		len;
	char	**arr;

	count = 0;
	len = ft_strlen(s);
	while (*s++)
		if (*s == c)
			count++;
	arr = (char **) malloc (sizeof(char *) * (count + 2));
	s -= len + 1;
	return (res(count, arr, s, c));
}
