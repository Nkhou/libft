/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:36:45 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/24 16:40:55 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
// int main()
// {
// 	char str[] = "12dds54";
// 	int i;
// 	i = 0;
// 	while (str[i])
// 	{
// 		if (ft_isalnum(str[i]) != 0)
// 			i++;
// 		else
// 		{
// 		   printf("is not alpha");
// 		   break;
// 		}
// 	}
// 	return 0;
// }
