/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:36:26 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/11 19:03:05 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	long int	i;
	long int	sgn;
	long int res;

	i = 0;
	sgn = 1;
	res = 0;
	while ((str[i] > 8 && str[i] < 14) || (str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sgn *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sgn);
}
// int main(void)
// {
//     int i;
// 	int j;
//     char *s;
 
//     s = " -9885";
//     j = atoi(s);     /* i = -9885 */
 
//     printf("j = %d\n",j);
// 	i = ft_atoi(s);     /* i = -9885 */
 
//     printf("i = %d\n",i);
// }