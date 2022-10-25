/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:36:56 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/24 16:42:08 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}
// int	main()
// {
// 	char str[] = "1254";
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (ft_isdigit(str[i]) != 0)
// 			i++;
// 		else
// 		{
// 		   printf("is not digital");
// 		   break;
// 		}
// 	}
// 	return 0;
// }
