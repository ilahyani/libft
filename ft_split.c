/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:03:47 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/11 18:30:29 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "ft_strlcpy.c"
#include "ft_strlen.c"
#include <stdio.h>

static char	**res(int count, char **arr, const char *s, char c);

char	**ft_split(char const *s, char c)
{
	int		count;
	int		len;
	char	**arr;

	if (!s)
		return (0);
	count = 0;
	len = ft_strlen(s);
	while (s && *s++)
		if (*s == c && *(s + 1) != c)
			count++;
	printf("count 1: %d\n", count);
	if (*(s - 2) == c && count > 1)
		count--;
	printf("count 2: %d\n", count);
	arr = (char **) malloc (sizeof(char *) * (count + 1));
	if (!arr)
		return (0);
	s -= len + 1;
	if (s[0] == c)
		return (res(count, arr, s, c));
	return (res(count + 1, arr, s, c));
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
			while (i-- >= 0)
				free(arr[i]);
			return (NULL);
		}
		ft_strlcpy(arr[i], s + (j - size), size + 1);
		printf("arr[%d]: %s\n", i, arr[i]);
		i++;
	}
	printf("count 4 - i: %d\n", i);
	arr[i] = 0;
	return (arr);
}



int main() {
	char *s = "lorem  ipsum dolllor sit amet, consectetur  adipiscing elit.";
	char	**r = ft_split(s, ' ');
	int	i = 0;
	for (i = 0; r[i]; i++)
		printf("||arr[%d]: %s||\n", i, r[i]);
}


/*
check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');

check_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');

check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');

check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
*/
