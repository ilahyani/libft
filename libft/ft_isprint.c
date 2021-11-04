/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:21:10 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/01 12:27:25 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int x)
{
	if (x >= 32 && x <= 126)
		return (1);
	return (0);
}
