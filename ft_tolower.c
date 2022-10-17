/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:38:13 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/11 18:41:17 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
// int main()
// {
// 	char str[] = "Hello IT";
// 	int i;
// 	i = 0;
// 	while (str[i])
// 	{
// 		ft_tolower(str[i]);
// 		i++;
// 	}
// 	printf("%s", str);
// 	return (0);
// }