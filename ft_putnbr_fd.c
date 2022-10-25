/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 22:28:18 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/24 16:59:55 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= (-1);
		ft_putnbr_fd(n, fd);
	}
	else
	{
		if (n >= 0 && n <= 9)
			ft_putchar_fd(n + '0', fd);
		else
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putchar_fd(n % 10 + '0', fd);
		}
	}
}

// int main(int ac, char **av)
// {
// 	int fd1;
// 	if (!ac)
// 		return 0;
// 	//get the file descriptor of the file
// 	fd1 = open(av[1], O_WRONLY);
// 	printf("fd1: %d\n", fd1);
// 	ft_putnbr_fd(-2147483648, 1);
// 	close(fd1);
// 	return 0;
// }