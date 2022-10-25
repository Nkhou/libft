/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:37:20 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/24 16:58:02 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*my_s1;
	unsigned char	*my_s2;
	size_t			i;

	i = 0;
	my_s1 = (unsigned char *)s1;
	my_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (my_s1[i] != my_s2[i])
			return (my_s1[i] - my_s2[i]);
		i++;
	}
	return (0);
}
// #include<stdio.h>
// #include<string.h>

// int main()
// {
//  //initializing character array
//  char str1[ ] = "Learn python from tyrtoprogram.com";
//  char str2[ ] = "Learn C from trytoprogram.com";

//  //displaying str1 and str2
//  printf("str1 = %s\n", str1);
//  printf("str2 = %s\n", str2);

//  printf("\nmemcmp( str1, str2, 5 ) = %d\n", memcmp( str1, str2, 5 ));
//  printf("\nmemcmp( str1, str2, 15 ) = %d\n", memcmp( str1, str2, 15 ));
//  printf("\nmemcmp( str2, str1, 15 ) = %d\n", memcmp( str2, str1, 15 ));
//  printf(" \n\n\n\n\n\n\n\n\n");
//  printf("\nmemcmp( str1, str2, 5 ) = %d\n", ft_memcmp( str1, str2, 5 ));
//  printf("\nmemcmp( str1, str2, 15 ) = %d\n", ft_memcmp( str1, str2, 15 ));
//  printf("\nmemcmp( str2, str1, 15 ) = %d\n", ft_memcmp( str2, str1, 15 ));

//  return 0;
// }