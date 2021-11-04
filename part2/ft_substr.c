/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:12:13 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/04 13:37:29 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*src;
	size_t	i;

	if (len == 0)
		return (NULL);
	src = (char *) s;
	sub = (char *) malloc (len * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		printf("%u:%c ", start, src[start]);
		sub[i++] = src[start++];
	}
	printf("\n");
	sub[i] = '\0';
	printf("1: %s\n", sub); 
	return (sub);
}

int	main()
{
	char	s1[20] = "abcdefgh";
	printf("This: %s\n", ft_substr(s1, 0, 3));
}
