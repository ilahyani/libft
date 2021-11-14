/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:03:47 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/13 16:58:43 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	**res(int count, char **arr, const char *s, char c);

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**arr;
	int		i;

	if (!s)
		return (0);
	i = 0; 
	while (s[i] == c)
		i++;
	count = 1;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	if (s[i - 1] == c && count > 0)
		count--;
	if (ft_strlen(s) == 0)
		count = 0;
	arr = (char **) malloc (sizeof(char *) * (count + 1));
	if (!arr)
		return (0);
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
		while (s[j])
		{
			if (s[j] == c)
				j++;
			else
				break;
		}
		size = 0;
		while (s[j] != c)
		{
			j++;
			size++;
		}
		arr[i] = (char *) malloc (size + 1);
		if (!arr[i])
		{
			while (i-- >= 0)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
		ft_strlcpy(arr[i], s + (j - size), size + 1);
		i++;
	}
	arr[i] = 0;
	return (arr);
}



/*

int main() {
	char *s = "1-2--3---4----5-----42--";
	char	**r = ft_split(s, '-');
	int	i = 0;

	while (r[i])
	{
		printf("main: arr[%d]: |%s|\n", i, r[i]);
		i++;
	}	
}

*/
