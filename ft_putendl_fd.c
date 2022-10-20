/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:59:48 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/20 15:31:58 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char n;
	int i;

	i = 0;
	n = '\n';
	if (s != NULL)
	{
		while (s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
		write(fd, &n, 1);
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
// 	ft_putendl_fd("get the file descriptor of the file", 1);
// 	close(fd1);
// 	return 0;
// }
