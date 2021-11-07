/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:23:43 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/04 12:34:31 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*buffer;
	unsigned char		*d;
	size_t				i;

	d = dest;
	i = 0;
	buffer = (unsigned char *) src;
	while (i < n)
	{
		d[i] = buffer[i];
		i++;
	}
	return (d);
}
