/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:36:53 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/24 16:41:29 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main()
// {
// 	char str[] = "12d*ds54";
// 	int i;
// 	i = 0;
// 	while (str[i])
// 	{
// 		if (ft_isascii(str[i]) != 0)
// 			i++;
// 		else
// 		{
// 		   printf("is not alpha");
// 		   break;
// 		}
// 	}
// 	return 0;
// }
