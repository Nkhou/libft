/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:37:46 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/11 18:48:34 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int lents;
	
	lents = ft_strlen(dst);
	while (lents  < dstsize)
	{
		dst[lents] = src[lents];
		lents++;
	}
	return lents;
}
// int main()
// {
// 	char src[40] = "hello";
// 	char dest[40] = "abc";
// 	ft_strlcat(dest, src, 4);
// 	printf("%s sr = %s", dest,src);
// 	return (0);
// }