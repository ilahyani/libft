/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 18:21:01 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/09 20:33:30 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>

static int	frontcheck(char const *s1, char const *set)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (set[i])
	{
		if (set[i] == s1[j])
		{
			j++;
			i = - 1;
		}
		i++;
	}
	return (j);
}

static int	backcheck(char const *s1, char const *set)
{
	int	l;
	size_t	lens1;

	l = 0;
	lens1 = strlen(s1); //and not here
	while (set[l])
	{
		if (set[l] == s1[lens1 - 1]) //why here
		{
			lens1--;
			l = - 1;
		}
		l++;
	}
	//printf("here\n");
	return (lens1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	lens1;
	char	*s2;

	//printf("starting size:         %ld\n", strlen(s1));
	s1 += frontcheck(s1, set);
	//printf("size after frontcheck: %ld\n", strlen(s1));
	lens1 = backcheck(s1, set);
	//printf("size after backcheck:  %d\n", lens1);
	if (lens1 < 0)
		return ("");
	s2 = (char *) malloc (lens1 + 1);
	//printf("allocated memory:      %d\n", lens1 + 1);
	if (!s2)
		return (0);
	//printf("here\n");
	i = 0;
	while (lens1--)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}


int	main()
{
	const char *s = "\t   \n\n\n  \n\n\t    Hello \t  Please\n Trim me !\t\t\t\n  \t\t\t\t  ";
	const char *set = " \n\t";
	printf("|%s|\n", ft_strtrim(s, set));
}
