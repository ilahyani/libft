/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:38:16 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/06 15:25:06 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	int len;
	char tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned long	i;
	unsigned long	len;
	char			*dup;
	
	i = 0;
	while (s1[i])
	{
		if (!strnstr(s1, set, strlen(set)))
			break;
		s1 += strlen(set);
	}
	len = ft_strlen(s1);
	dup = strdup(s1);
	ft_strrev(dup);
	while (dup[len] == set[i])
	{
		len--;
		i++;
	}
	printf("%s\n", dup);
	return (dup);
}

int	main() {
	const char	s[100] = "hellohellowhateverhellohellohello";
	const char	set[100] = "hello";
	ft_strtrim(s, set);
	//printf("%s\n", ft_strtrim(s, set));
}
