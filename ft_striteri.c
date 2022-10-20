/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:05:37 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/20 15:40:30 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	int i;

	i = 0;
	if (s != NULL)
	{
		while (s[i])
		{
			f(i, s + i);
			i++;
		}
	}
}
// int main()
// {
// 	char str[] = "hello";
// 	ft_striteri(str, f);
// 	printf("%s", str);
// 	return (0);
// }