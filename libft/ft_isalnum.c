/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:10:46 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/01 11:29:59 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
		return (1);
	return (0);
}

int	ft_isdigit(int x)
{
	if (x >= '0' && x <= '9')
		return (1);
	return (0);
}

int	ft_isalnum(int x)
{
	if (ft_isalpha(x) || ft_isdigit(x))
		return (1);
	return (0);
}
