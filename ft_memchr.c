/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:28:49 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/08 14:39:46 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;
	size_t				i;

	p = s;
	i = 0;
	while (i < n)
	{
		if (*p++ == c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}