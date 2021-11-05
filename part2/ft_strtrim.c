/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:38:16 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/05 20:24:16 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trmd;
	unsigned long		i;
	int		j;
	int		k;
	
	trmd = (char *) malloc (strlen(s1) - 2*strlen(set) + 1);
	if (!trmd)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i + j] == set[j])
		j++;
	if (set[j] == '\0')
		i = j;
	j = 0;
	while (s1[i])
	{
		k = 0;
		while (set[k] && s1[i + k] == set[k])
			k++;
		if (s1[i + k] == '\0')
			break;
		trmd[j++] = s1[i++];
	}
	return (trmd);
}

int	main() {
	const char	*x = "hellomotherfuckerhello";
	const char	*set = "h";
	printf("res: %s\n", ft_strtrim(x, set));
}
