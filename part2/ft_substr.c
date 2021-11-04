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
	i = 0;
	if (!sub)
		return (NULL);
	while (i < len)
	{
		src[start] = sub[i];
		printf("%u:%c ", start, src[start]);
		start++;
		i++;
	}
	printf("\n"); 
	printf("1: %s\n", sub); 
	sub[i] = '\0';
	return (sub);
}
int	main()
{
	char	s1[20] = "abcdefgh";
	printf("This: %s\n", ft_substr(s1, 2, 6));
}
