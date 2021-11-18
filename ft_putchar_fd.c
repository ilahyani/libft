/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilahyani <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 00:28:22 by ilahyani          #+#    #+#             */
/*   Updated: 2021/11/16 17:52:16 by ilahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>

int main()
{
	int fd;
	fd = open("test.txt", O_CREAT | O_RDONLY  , S_IRUSR | S_IWUSR);
	ft_putchar_fd('t', fd);
	close(fd);	
}
*/
