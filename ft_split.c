/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 01:06:17 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/17 05:54:44 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		ft_count(char const *s, char c);

char	**ft_fill(int count, const char *s, char c, char **tab);

void	ft_free(char **tab, int j);

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**tab;
	char	*str;

	if (!s)
		return (NULL);
	str = ft_strtrim(s, &c);
	count = ft_count(str, c);
	tab = (char **) malloc ((count + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	tab = ft_fill(count, str, c, tab);
	free(str);
	return (tab);
}

int	ft_count(char const *s, char c)
{
	int		count;
	int		i;

	count = 1;
	i = 0;
	if (ft_strlen(s) == 0)
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_fill(int count, const char *s, char c, char **tab)
{
	int		i;
	int		j;
	size_t	size;

	i = 0;
	j = 0;
	while (j < count)
	{
		while (s[i] == c)
			i++;
		size = 0;
		while (s[i + size] && s[i + size] != c)
			size++;
		tab[j] = (char *) malloc (size + 1);
		if (!tab[j])
		{
			ft_free(tab, j);
			return (NULL);
		}
		ft_strlcpy(tab[j], s + i, size + 1);
		j++;
		i += size;
	}
	tab[j] = 0;
	return (tab);
}

void	ft_free(char **tab, int j)
{
	while (j--)
		free(tab[j]);
	free(tab);
}
