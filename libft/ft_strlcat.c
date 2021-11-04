/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:29:49 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/04 12:32:35 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	size_t	j;

	i = 0;
	while (dst[i])
		i++;
	if (size != 0)
	{
		j = 0;
		while (src[j] && j < size)
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	return (i);
}
