/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:03:47 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/10 21:14:26 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	**res(int count, char **arr, const char *s, char c);

char	**ft_split(char const *s, char c)
{
	int		count;
	int		len;
	char	**arr;

	count = 0;
	if (!s)
		return (0);
	len = ft_strlen(s);
	while (s && *s++)
		if (*s == c && *(s + 1) != c)
			count++;
	if (*(s - 2) == c && count > 1)
		count--;
	arr = (char **) malloc (sizeof(char *) * (count + 1));
	s -= len + 1;
	return (res(count, arr, s, c));
}

static char	**res(int count, char **arr, const char *s, char c)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	j = 0;
	while (i < count)
	{
		while (s[j] && s[j] == c)
			j++;
		size = 0;
		while (s[j] != c)
		{
			j++;
			size++;
		}
		arr[i] = (char *) malloc (sizeof(char) * (size + 1));
		if (!arr[i])
		{
			while (i--)
				free(arr[i]);
			return (0);
		}
		ft_memcpy(arr[i], s + (j - size), (size));
		arr[i][size] = '\0';
		i++;
	}
	arr[i] = 0;
	return (arr);
}
