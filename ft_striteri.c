/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:05:37 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/17 23:09:46 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void f(unsigned int i, char *s)
{
	while (s[i])
	{
	 s[i] = s[i] - i;
	 i++;
	}
}
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