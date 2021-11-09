/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:55:46 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/09 11:36:37 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = dest;
	s = src;
	if (n == 0)
		return (d);
	if (!dest && !src)
		return (NULL);
	while (s[i] && n--)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
