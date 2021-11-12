/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:03:47 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/13 00:01:03 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
//#include "ft_strlcpy.c"
//#include "ft_strlen.c"
//#include <stdio.h>
//#include "ft_strdup.c"

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
//	printf("count 1: %d\n", count);
	if (s[i - 1] == c && count > 0)
		count--;
//	printf("count 2: %d\n", count);
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
//		printf("arr[%d]: |%s|\n", i, arr[i]);
		i++;
	}
	arr[i] = 0;

//	printf("arr[%d] == %s\n", i, arr[i]);
	return (arr);
}



/*
int main() {
	char *s = "--1-2--3---4----5-----42";
	char	**r = ft_split(s, '-');
	int	i = 0;

	while (r[i])
	{
		printf("main: arr[%d]: |%s|\n", i, r[i]);
		i++;
	}	
}



check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');

check_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');

check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');

check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
*/
