/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:36:36 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/26 18:31:39 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// int main()
// {
// 	char str[70] = "hello everyoneGeeksForGeeks is for programming geeks";
// 	char s[70] = "hello everyoneGeeksForGeeks is for programming geeks";
// 	ft_bzero(str, 4*sizeof(char));
// 	ft_bzero(s , 4*sizeof(char));
// 	printf("%s\n", str);
// 	printf("%s\n", s);
// }