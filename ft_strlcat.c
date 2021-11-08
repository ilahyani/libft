/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:29:49 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/08 19:07:50 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	j;

	len = ft_strlen(dst);
	if (size < len)
	{
		j = 0;
		while (src[j] && j < size - 1)
			dst[len++] = src[j++];
		dst[len] = '\0';
	}
	return (len);
}
