/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:43:35 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/28 20:27:41 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

// int main(int ac, char **av)
// {
// 	int fd1;
// 	int fd2;
// 	if (!ac)
// 		return 0;
// 	//get the file descriptor of the file
// 	fd1 = open(av[1], O_WRONLY);
// 	fd2 = open(av[2], O_WRONLY);
// 	printf("fd1: %d\n", fd1);
// 	printf("fd2: %d", fd2);
// 	ft_putchar_fd('c', 1);
// 	close(fd);
// 	return 0;
// }
