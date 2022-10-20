/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:37:46 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/19 19:43:37 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lents;
	size_t	i;
	size_t	j;
	size_t	lnsrc;

	i = 0;
	lnsrc = ft_strlen(src);
	if (dstsize == 0)
		return lnsrc;
	lents = ft_strlen(dst);
	j = lents;
	if (dstsize <= lents )
		return (dstsize + lnsrc);
	while ( (j < dstsize - 1) && i < lnsrc)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (lents + lnsrc);
}

// #include<string.h>

// int main()
// {
// 	char buff1[0xF00] = "test1";
//     char buff2[0xF00] = "test1";

// 	char *str = "2222222";
//     size_t max = 6;
// 	size_t r1 = strlcat(0, str, 0);
// 	//size_t r2 = ft_strlcat(buff2, str, max);

// 	printf("%zu %d", r1,6);
// 	return (0);
// }