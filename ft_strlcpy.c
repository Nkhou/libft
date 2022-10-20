/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhoudro <nkhoudro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:20:15 by nkhoudro          #+#    #+#             */
/*   Updated: 2022/10/19 15:33:48 by nkhoudro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t	dstsize)
{
	size_t	i;
	size_t	cmp;

	i = 0;
	cmp = 0;
	while (src[cmp] != '\0')
		cmp++;
	if (dstsize == 0)
		return (cmp);
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (cmp);
}
// void test(int size)
// {
// 	char string[] = "Hello there, Venus";
// 	char buffer[19];
// 	int r;

// 	r = strlcpy( buffer, string, size);
// 	printf("Copied '%s' into '%s', length %d\n", string, buffer, r);
// }

// int main()
// {
// 	test(30);
// 	test(1);
// 	test(0);
// 	return(0);
// }
