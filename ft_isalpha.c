/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:36:49 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/11 20:44:05 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A'&& c <= 'Z'))
		return (1);
	else return (0);
}
// int main()
// {
// 	char str[] = "12dds54";
// 	int i;
// 	i = 0;
// 	while (str[i])
// 	{
// 		if (ft_isalpha(str[i]) != 0)
// 			i++;
// 		else
// 		{
// 		   printf("is not alpha");
// 		   break;
// 		}	   
// 	}
// 	return 0;
// }
