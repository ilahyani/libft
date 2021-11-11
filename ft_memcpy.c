/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:55:46 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/11 18:30:49 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned char		*s;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (n == 0)
		return (d);
	if (!dest && !src)
		return (NULL);
	i = 0;
	while (s && n--)
		*d++ = *s++;
	return (d);
}
