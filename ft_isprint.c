/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:37:09 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/11 18:39:41 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "libft.h"

int ft_isprint(int c)
{
	if (c >= 32 && c < 127)
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
// 		if (ft_isprint(str[i]) != 0)
// 			i++;
// 		else
// 		{
// 		   printf("is not alpha");
// 		   break;
// 		}
// 	}
// 	return 0;
// }
