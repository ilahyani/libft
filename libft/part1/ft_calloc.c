/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:29:38 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/04 11:38:53 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
		*p++ = '\0';
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*x;

	x = malloc (nmemb * size);
	if (!x)
		return (0);
	ft_bzero (x, nmemb * size);
	return (x);
}
