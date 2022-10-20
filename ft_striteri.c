/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:05:37 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/19 10:38:08 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	int i;

	i = 0;
	while (s[i])
	{
		f(i, s);
		i++;
	}
}
// int main()
// {
// 	char str[] = "hello";
// 	ft_striteri(str, f);
// 	printf("%s", str);
// 	return (0);
// }