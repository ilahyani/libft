/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:03:47 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/06 21:59:06 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	k;
	char	**x;

	i = 0;
	j = 0;
	x = (char **) malloc (strlen(s));
	while (s[i])
	{
		k = 0;
		while (s[i] != c)
			x[j][k++] = s[i++];
		x[j][k] = '\0';
		j++;
		i++;
	}
	return ((char **)s);
}

int	main()
{
	char const	*s = "hello world hello";
	char	c = ' ';
	printf("%p", ft_split(s, c));
}
