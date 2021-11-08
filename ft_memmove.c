/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:23:43 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/08 12:49:42 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*buffer;
	unsigned char		*d;
	size_t				i;

	d = (unsigned char *)dest;
	buffer = (unsigned char *) src;
	if (!d && !buffer)
		return (0);
	i = 0;
	if (buffer < d)
	{
		while (n--)
			*(d + n) = *(buffer + n);
	}
	else
	{
		while (i < n)
		{
			d[i] = buffer[i];
			i++;
		}
	}
	return (d);
}
