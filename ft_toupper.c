/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:38:20 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/24 18:38:04 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	while (c >= 97 && c <= 122)
	{
		c = c - 32;
	}
	return (c);
}
// int main()
// {
// 	char str ='a';	
// 	printf("%c",ft_toupper(str));
// 	return 0;
// }